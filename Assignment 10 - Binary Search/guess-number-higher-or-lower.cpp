/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long left = 1;
        long ans;
        long mid =1;
        
        while(left <= n){
            mid = (left+n)/2;
            
            int res = guess(mid);
            
            if(res == -1){
                n = mid - 1;
            }else if(res ==  1){
                left =  mid + 1;
            }else if(res == 0){
                return mid;
            }
        }

        return mid;
    }
};
