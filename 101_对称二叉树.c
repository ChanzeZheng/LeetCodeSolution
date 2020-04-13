/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define Node struct TreeNode
bool isChildSymmetric(Node* left, Node* right){
    if(left==NULL){
        return right==NULL;
    }
    if(right==NULL){
        return false;
    }
    if(left->val==right->val){
        return isChildSymmetric(left->right,right->left)&&
        isChildSymmetric(left->left,right->right);
    }
    return false;
}

bool isSymmetric(struct TreeNode* root){
    if(root==NULL){
        return true;
    }
    return isChildSymmetric(root->left, root->right);
}