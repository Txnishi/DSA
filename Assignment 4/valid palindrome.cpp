class Solution {
public:
    bool isPalindrome(string s) {
        
        string a ="";
        string b="";
        int len = s.size();
        
        for(int i=0; i< len; i++){
            
            if(s[i]>='A' && s[i] <='Z'){
                a += (s[i] + 32);
            } else if((s[i]>= 'a' && s[i]<= 'z') || (s[i]>= '0' && s[i]<= '9')){
                a+= s[i];
            }
        }
        
        b = a;
        reverse(b.begin(), b.end());
        
        if( a == b){
            return true;
        } else{
            return false;
        }
        
        
    }
};
