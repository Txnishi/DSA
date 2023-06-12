class Solution {
public:
    
    int distinctIntegers(int n) {

        if(n == 1){
            return 1;
        }
         
            
        unordered_set<int>st;
        unordered_set<int>newst;
        
        for(int i = 1; i<=n ; i++){
            st.insert(i);
        }
        
        for(int j = 1; j <=n; j++){
            for(int a: st){
                if(a%j == 1){
                    newst.insert(j);
                }

            }
        }
        
        int count = newst.size();

        
        
        return count;
    
    }
};
