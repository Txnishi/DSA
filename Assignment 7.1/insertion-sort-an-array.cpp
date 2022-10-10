class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        vector<int>res = nums;
        
        int len = nums.size();
        int ele;
        for(int i = 1; i< len; i++){
            ele = nums[i];
            int j = i-1;
            while(j >=0 && res[j]>ele ){
               res[j+1] = res[j];
                j--;
            }
            res[j+1] = ele;

        }
    
        return res; 
    }
    

};
