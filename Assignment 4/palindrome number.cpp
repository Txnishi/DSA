class Solution {
public:
    bool isPalindrome(int x) {      
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
        
        if(reverse < 0){
            return false;
        } else if( reverse == x){
            return true;
        } else{
            return false;
        }
        
    }
};
