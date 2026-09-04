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
TreeNode* solve(TreeNode* root ,int val1 ,int val2){
    if((val1<root->val&&root->val<val2)||((root->val==val1)||(root->val==val2)))
    return root;
    if(val1<root->val&&val2<root->val)return solve(root->left,val1,val2);
    else return solve(root->right,val1,val2);
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int val1=p->val;
        int val2=q->val;
        if (val1 > val2) return solve(root,val2,val1);
        else return solve(root, val1, val2);
    }
};
