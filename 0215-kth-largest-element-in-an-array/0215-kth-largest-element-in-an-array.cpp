class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int hi = nums.size()-1;
        int lo = 0, mid;
        sort(nums.begin(), nums.end());
        
        int count = 1;
        
        for(int i = hi; i>=0 ; i--){
            if(count == k){
                return nums[i];
            }
            count++;
        }
        
        return 0;
        
    }
};