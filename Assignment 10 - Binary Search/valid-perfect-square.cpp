class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int left = 0;
        int right = INT_MAX;
        
        while(left<=right){
            
            long mid = (left + right)/2;
            
            if(mid*mid == num){

                return true;
                
            }else if(mid*mid < num){
                left = mid + 1;
            }else{
                right = mid -1;                
            }
        }
        
        return false;
        
    }
};
