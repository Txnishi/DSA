class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int len = nums.size();
        
        int left = 0 , mid;
        int right = len -1;
        
        while(left <= right){
            
            mid = (left + right)/2;
            
            if(nums[mid] == target){
                return mid;
            }else if(target < nums[mid]){
                right = mid - 1;
            }else {
                left = mid + 1;
            }
            
        }
        
        return -1;
        
    }
};
