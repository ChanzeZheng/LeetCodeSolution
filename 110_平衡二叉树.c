/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 #define Node struct TreeNode
int getHeightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight = getHeightOfTree(root->left);         //左子树的高度
    int rightHeight = getHeightOfTree(root->right);       //右子树的高度
    if(leftHeight==-1||rightHeight==-1){
        return -1;
    }
    int num = leftHeight-rightHeight;                           //高度之差
    if(num==0||num==-1){     //说明左子树高度小于右子树
        return rightHeight+1;
    }else if(num==1){
        return leftHeight+1;
    }else{                          //说明当前节点已经不是高度平衡的二叉树了
        return -1;
    }
}

bool isBalanced(struct TreeNode* root){
    return getHeightOfTree(root)!=-1;
}
