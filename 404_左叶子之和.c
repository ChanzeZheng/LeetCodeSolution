#include<stdio.h>
#include<malloc.h>


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

#define MAX_SIZE 100
#define Node struct TreeNode

/*
* 初始化一个节点
*/
Node* initNode(int val) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

/*
*	添加子节点的函数，自动判断加入左右哪个节点
*/
void addChildNode(Node* father, Node* child) {
	if (father->val >= child->val) {			//父节点大于子节点，加入左节点
		father->left = child;
	}
	else				//父节点小于子节点，加入右节点
	{
		father->right = child;
	}
	
}


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
struct TreeNode** generateTrees(int n, int* returnSize) {
	Node** result = (Node**)malloc(sizeof(Node) * MAX_SIZE);				//创建一个MAX_SIZE大小的二维数组作为结果数组返回
	*returnSize = 0;

	return result;
}





