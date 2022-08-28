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
#include <bits/stdc++.h>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        stack<TreeNode*>S;
        S.push(root);
        
        TreeNode* cur;
        
        vector<int>pre;
        
        
        if(S.top() == NULL) return pre;
        
        while(S.size() > 0){
            cur = S.top(); 
            S.pop();
            
            pre.push_back(cur->val);

            
            if(cur->right){
                S.push(cur->right);
            }
            if(cur->left){
                S.push(cur->left);
            }
        }
        
        return pre;
        
    }
};
