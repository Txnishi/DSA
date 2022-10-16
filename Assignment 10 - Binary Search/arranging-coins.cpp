class Solution {
public:
    int arrangeCoins(int n) {
        
        int i = 1, r = n;
        long coins_req = 0;
        int ans;
        
        while(i <= r){
            
            long mid = i + (r-i)/2;
            
            coins_req = mid*(mid+1)/2;
            
            if(coins_req <= n){
                i = mid +1;
                ans = mid;
            }else{
                r = mid-1;
            }
    
            
        }
        
        return ans;
        
        
    }
};
