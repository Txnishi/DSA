// leetcode
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, prod=1;
        int result=0;
        int len=0;
        
        
        for(int i=n; i>0; i= i/10){
            len++;
        }
        
        for(int j=n; j>0; j= j/10){
            sum += j%10;
            prod *= j%10;
            len--;
        }
        
        result = prod - sum;
        
        return result;
    }
};
