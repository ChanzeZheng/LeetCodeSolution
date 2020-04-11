/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val){
    if(root==NULL||root->val==val){
        return root;
    }
    if(root->val<val){              //进入右子树
        return searchBST(root->right,val);
    }
    return searchBST(root->left,val);  //进入左子树
}