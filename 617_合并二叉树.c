/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){
    if(t1==NULL&&t2==NULL){     //两个都为null
        return NULL;
    }   
    if(t1==NULL){               //只有t1为null
        return t2;
    }
    if(t2==NULL){
        return t1;
    }
    t1->val +=t2->val;
    t1->left = mergeTrees(t1->left,t2->left);
    t1->right = mergeTrees(t1->right,t2->right);
    return t1;

}