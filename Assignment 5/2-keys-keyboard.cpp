class Solution {
public:
    int minSteps(int n) {
        
        if(n==1){
            return 0;
        }
        
        int ans=0;
        
        int m = n/2;
        int i=2;
        
        while(i<=m && n!=0){
            if(n%i==0){
                ans+=i;
                n=n/i;
            }else{
                i++;
            }
        }
        
        if(ans ==0){
            return n;
        }
        
        return ans;
    }
};
