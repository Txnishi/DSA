class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int>ans;
        int len = nums.size()-1;
        
        sort(nums.begin(), nums.end());
        int i = 0;
        int start , end;
        bool found = false;
        while(i <= len){
            
            int mid = (i + len)/2;
            
            if(nums[mid] == target){
                start = mid;
                end = mid;
                found = true;
                break;
            }else if(target < nums[mid]){
                len = mid - 1;
            }else if (target > nums[mid]){
                i = mid + 1;
            }            
        } 
        if(found){
            while(start >= 0 && nums[start]==target){
                --start;
            }
            while(end<= len && nums[end]==target){
                ++end;
            }
            ++start;
            --end;
        
        
        while(start<=end){
            ans.push_back(start);
            start++;
        }
        }
        
        
        return ans;
        
    }
};