#include <stdio.h>
#include <malloc.h>


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;

};


#define  MAX_SIZE 100
#define Node struct TreeNode






int* inorderTraversal(Node* root, int* returnSize) {
	Node** stack = (Node**)malloc(sizeof(Node) * MAX_SIZE);
	int* result = (int *)malloc(sizeof(int) * MAX_SIZE);
	int i = 0;
	*returnSize = 0;
	Node *p = root;
	while (i||p)							
	{
		if (p) {				//存在当前节点
			stack[i++] = p;
			p = p->left;		//进入左子树进行下一次迭代
		}
		else{					//说明当前节点不存在
			p = stack[--i];		//从栈中取出一个节点,其实就是父节点
			result[*returnSize++] = p->val;	//将父节点的值放入结果数组
			p = p->right;		//对右节点进行下一次迭代
		}
	}



	return result;
}

