class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int hi = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        
        
        return nums[k-1];
        
        
        
//         int count = 1;
        
//         for(int i = hi; i>=0 ; i--){
//             if(count == k){
//                 return nums[i];
//             }
//             count++;
//         }
        
        
    }
};