/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root==NULL){
        return true;
    }
    if(root->val>p->val&&root->val>q->val){         //递归左子树
        return lowestCommonAncestor(root->left,p,q);
    }
    if(root->val<p->val&&root->val<q->val){         //递归右子树
        return lowestCommonAncestor(root->right,p,q);
    }
    
    return root;                        //说明当前结点就是目标节点


}