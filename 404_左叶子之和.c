#define Node struct TreeNode

 int solution(Node* root,int flag) {
	 int leftTreeSum, rightTreeSum;						//左子树的左叶子之和，右子树的左叶子之和
	 leftTreeSum = rightTreeSum = 0;					//初始化为0
	 if (!root->left && !root->right && flag) {		//左叶子节点
		 return root->val;
	 }
	 if (!root->left && !root->right) {				//右叶子节点
		 return 0;
	 }
	 if (root->left) {
		 leftTreeSum = solution(root->left, 1);				//标志为左节点
	 }
	 if (root->right) {
		 rightTreeSum = solution(root->right, 0);			//标志为右节点
	 }
	 return leftTreeSum + rightTreeSum;
 }


int sumOfLeftLeaves(struct TreeNode* root) {
    if(!root){
        return 0;
    }
    return solution(root, 0);
	
	
	
}