/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define Node struct TreeNode
#define MAX_SIZE 2147483648
#define MIN_SIZE -2147483649
bool solution(Node* root,long max,long min){
    if(root==NULL){
        return true;
    }
    if(root->val<=min||root->val>=max){
        return false;
    }
    return solution(root->left,root->val,min)&&solution(root->right,max,root->val);
}

bool isValidBST(struct TreeNode* root){
    if(root==NULL){
        return true;
    }
    return solution(root->left,root->val,MIN_SIZE)&&solution(root->right,MAX_SIZE,root->val);
}

