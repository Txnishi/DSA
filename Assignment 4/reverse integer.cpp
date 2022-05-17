//leetcode
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rem, len=0;

        long int reverse=0;
        
        for(int i= abs(x); i>0 ; i=i/10){
            len++;
        }
        
        for(int j= abs(x); j>0; j=j/10){
            rem= j%10;
            reverse+= rem*(pow(10, len-1));
            len--;
        }
        
        if(x < 0){
            reverse*=(-1);
        }
        
        if(reverse < pow(-2, 31) || reverse > pow(2,31)-1){
            return 0;
        }else{
            return reverse;
        }
    }
};
