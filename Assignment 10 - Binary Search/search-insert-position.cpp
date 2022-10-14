class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int len = nums.size()-1;
        int i = 0;

        while(i<len){
            
            int mid = (i+len)/2;
            
            if(nums[mid] == target){
                return mid;
                
            }else if(nums[mid] > target){
                len = mid-1;
                
            }else{
                i = mid+1;
            }
            
        }
        
        if(nums[i] >= target){
            return i;
        }else{
            return i+1;
        }
        
        
       return 0; 
        
    }
};
