#include<stdio.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

#define Node struct TreeNode
#define MAX_NUM 10000

int minDepth(struct TreeNode* root) {
	int leftTreeDepth, rightTreeDepth;
	leftTreeDepth = rightTreeDepth = MAX_NUM;
	if (!root) {		//rootΪnull
		return 0;
	}
	if (!root->left && !root->right) {			//Ҷ�ӽڵ�
		return 1;
	}
	if (root->left) {
		leftTreeDepth = 1 + minDepth(root->left);
	}
	if (root->right) {
		rightTreeDepth = 1 + minDepth(root->right);
	}


	return leftTreeDepth > rightTreeDepth ? rightTreeDepth : leftTreeDepth;
}