class Solution {
private:
    void recur(vector<int>A , int i, vector<vector<int>> &res){
        
        if(i >= A.size()){
            res.push_back(A);
            return;
        } 
        
        int temp;
        
        for(int j = i; j< A.size(); j++){
            
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            
            recur(A, i+1, res);
            
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            
        }
       
        
    }
    
    
    
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int a =0;
        
        recur(nums,a,ans);
        return ans;
    }
};