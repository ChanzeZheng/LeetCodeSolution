/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#define Node struct TreeNode

Node* getLastNode(Node* root){
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL){
        if(root->right==NULL){      //叶子结点，最后的结点即当前结点
            return root;
        }
        return getLastNode(root->right);
    }
    Node * p = root->right;
    root->right = root->left;
    root->left = NULL;
    Node * lastLeft = getLastNode(root->right);     //这里的right即为原来的左子树，所以不可能为null
    lastLeft->right = p;
    return p==NULL?lastLeft:getLastNode(p);
}

void flatten(struct TreeNode* root){
    getLastNode(root);
}

