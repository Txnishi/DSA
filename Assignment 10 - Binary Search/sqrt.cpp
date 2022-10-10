class Solution {
public:
    int mySqrt(int x) {
        
        int left = 0;
        int right = INT_MAX;
        int sq;
        
        while(left <= right){
            
            long mid = (left + right)/2;
            
            if(mid*mid <= x ){
                sq = mid;
                left = mid + 1;
            }else{
                
                right = mid -1;
                
            }  
        }
        
        return sq;
        
        
    }
};
