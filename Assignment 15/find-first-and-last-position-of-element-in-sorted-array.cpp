class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int len = nums.size();
        int count = 0, temp = 0;
        vector<int>A;
        
        for(int i= 0; i< len; i++){
            if(nums[i] == target){
                count++;
                if(count == 1){
                    A.push_back(i);
                }
            } 
        }
        
        for(int j=0 ; j<len; j++){
            if(nums[j] == target){
                temp++;
                if(temp == count){
                    A.push_back(j);
                } 
            }
        }
        
        if(count == 0){
            A.push_back(-1);
            A.push_back(-1);
            
        } 
        
        
        return A;
        
    }
};
