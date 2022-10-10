class Solution {
public:
    int mySqrt(int x) {
        
        int left = 0;
        int right = INT_MAX;
        int index;
        
        while(left <= right){
            
            long mid = (left + right)/2;
            
            if(mid*mid <= x ){
                index = mid;
                left = mid + 1;
            }else{
                
                right = mid -1;
                
            }  
        }
        
        return index;
        
        
    }
};
