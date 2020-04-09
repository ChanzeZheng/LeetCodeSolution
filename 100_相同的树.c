/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p&&!q){         //两个都为null
        return true;
    }
    if(!p||!q){         //其中一个为null
        return false;
    }
    if(p->val!=q->val){
        return false;       //不相等
    }
    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

}