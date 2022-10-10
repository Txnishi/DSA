class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        vector<int>res = nums;
        
        int len = nums.size();
        int min;
        for(int i = 0; i< len-1; i++){
            min = i;
            int j = i+1;
            while(j < len){
                if(res[j] < res[min]){
                   min = j ;
                }
                j++;
            }
            swap(res[min],res[i]);
        }
    
        return res; 
    }
    

};
