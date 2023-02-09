class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int prof = 0;
       int buy = INT_MAX;
       int temp = 0;
       
       for(int i = 0; i < prices.size(); i++){
           if(buy > prices[i]){
            buy = prices[i];
           }
            temp = prices[i] - buy;
            if(prof < temp){
               prof = temp;
           }
       }


       return prof;

    }
};
