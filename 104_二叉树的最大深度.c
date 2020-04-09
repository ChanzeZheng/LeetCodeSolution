#include<stdio.h>
 struct TreeNode {
	 int val;
	 struct TreeNode *left;
	 struct TreeNode *right;
 };

#define Node struct TreeNode


 int maxDepth(struct TreeNode* root) {
	 int leftTreeDepth, rightTreeDepth;
	 leftTreeDepth = rightTreeDepth = 0;
	 if (!root)
	 {
		 return 0;
	 }
	 if (!root->left && !root->right) {			//р╤вс╫з╣Ц
		 return 1;
	 }
	 if (root->left)
	 {
		 leftTreeDepth = 1 + maxDepth(root->left);
	 }
	 if (root->right)
	 {
		 rightTreeDepth = 1 + maxDepth(root->right);
	 }
	 return leftTreeDepth > rightTreeDepth ? leftTreeDepth : rightTreeDepth;
	 
 }
