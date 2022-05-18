//leetcode
# include <bits/stdc++.h>


class Solution {
public:
    int addDigits(int num) {

        int sum=0;

        for(int j= num; j>0; j = j/10){
            sum += j%10;
        }
        
        if(sum/10 != 0){
            return addDigits(sum);
        } else{
            return sum;
        }
            
        
    }
};
