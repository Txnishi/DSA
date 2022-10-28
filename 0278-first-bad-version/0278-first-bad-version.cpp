// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int i = 0;
        long long int len = n-1;
        
        // vector<int>ans;
        
//         if(isBadVersion(1)){
//             return 1;
//         }
        
//         if(isBadVersion(n) && !isBadVersion(n-1)){
//             return n;
        // }
        
        while(i<=len){
            long long int mid = (i+len)/2;
            
            if(isBadVersion(mid)){
                len = mid-1;
                // ans.push_back(mid);
            }
            
            if(!isBadVersion(mid)){
                i = mid+1;
            }
            
        }
        
        // sort(ans.begin(), ans.end());
        
        
        
        return i;
    }
};