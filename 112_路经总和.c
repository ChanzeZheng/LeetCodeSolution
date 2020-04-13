/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if(root==NULL){
        return false;
    }
    int cha = sum-root->val;
    if(root->left==NULL&&root->right==NULL){
        return cha==0;
    }
    return hasPathSum(root->left,cha)||hasPathSum(root->right,cha);
}