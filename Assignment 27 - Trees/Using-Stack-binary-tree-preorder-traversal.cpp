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
        
        stack<TreeNode*>stack;
        stack.push(root);
        
        TreeNode* current;
        
        vector<int>A;
        
        if(stack.top() == NULL) return A;
        
        while(stack.size() > 0){
            current = stack.top();
            stack.pop();
            A.push_back(current->val);
            
            if(current->right){
                stack.push(current->right);
            }
            if(current->left){
                stack.push(current->left);
            }
            
        }
         return A;
    }
};
