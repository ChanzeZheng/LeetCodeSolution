/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 #define Node struct TreeNode
bool getHeightOfTree(Node* root,int* height){
    if(root==NULL){         //当前节点为null
        *height = -1;
        return true;
    }
    int left,right;
    if(getHeightOfTree(root->left,&left)&&
        getHeightOfTree(root->right,&right)&&
        abs(left-right)<2){         //左子树右子树为高度平衡二叉树
            *height = (left>right?left:right)+1;
            return true;
        }
    return false;
}

bool isBalanced(struct TreeNode* root){
    int height;
    return getHeightOfTree(root,&height);
}