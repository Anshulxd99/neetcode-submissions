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
void solve(TreeNode* root,int maxi,int &count){
    if(root->val>=maxi)count++;
   if(root->left)solve(root->left,max(maxi,root->val),count);
    if(root->right) solve(root->right,max(maxi,root->val),count);
}
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int maxi=INT_MIN;
        int count=0;
     solve(root,maxi,count);
     return count;
    }
};
