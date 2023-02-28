/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;

        if(root==NULL){
            return ans;
        }

        queue<TreeNode*>Q;
        Q.push(root);
        int count = 0;

        while(!Q.empty()){

            int len = Q.size();
            vector<int>lev;

            while(len--){
                TreeNode* cur= Q.front();
                lev.push_back(cur->val);

                if(cur->left != NULL) Q.push(cur->left);
                if(cur->right != NULL) Q.push(cur->right);
                
                Q.pop();
            }
            count++;
            
            if(count%2==0){
                reverse(lev.begin(), lev.end());
            }

            ans.push_back(lev);

        }

        return ans;

    }
};
