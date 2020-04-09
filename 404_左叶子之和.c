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
* ��ʼ��һ���ڵ�
*/
Node* initNode(int val) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

/*
*	����ӽڵ�ĺ������Զ��жϼ��������ĸ��ڵ�
*/
void addChildNode(Node* father, Node* child) {
	if (father->val >= child->val) {			//���ڵ�����ӽڵ㣬������ڵ�
		father->left = child;
	}
	else				//���ڵ�С���ӽڵ㣬�����ҽڵ�
	{
		father->right = child;
	}
	
}


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
struct TreeNode** generateTrees(int n, int* returnSize) {
	Node** result = (Node**)malloc(sizeof(Node) * MAX_SIZE);				//����һ��MAX_SIZE��С�Ķ�ά������Ϊ������鷵��
	*returnSize = 0;

	return result;
}





