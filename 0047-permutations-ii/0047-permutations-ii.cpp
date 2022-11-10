class Solution {
    
private:
    void recur(vector<int>A, int i, set<vector<int>>&res){
        
        int temp;
        
        if(i >= A.size()){
            res.insert(A);
        }
        
        
        for(int j = i; j< A.size(); j++){
            
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            
            recur(A, i+1, res);
        }
        
        
    }
    
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>>ans;
        int a = 0;
        
        recur(nums, a, ans);
        vector<vector<int>>b;
        for (auto it = ans.begin(); it !=ans.end(); ++it)
            b.push_back(*it);
        return b;
    }
};