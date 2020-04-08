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
		if (p) {				//���ڵ�ǰ�ڵ�
			stack[i++] = p;
			p = p->left;		//����������������һ�ε���
		}
		else{					//˵����ǰ�ڵ㲻����
			p = stack[--i];		//��ջ��ȡ��һ���ڵ�,��ʵ���Ǹ��ڵ�
			result[*returnSize++] = p->val;	//�����ڵ��ֵ����������
			p = p->right;		//���ҽڵ������һ�ε���
		}
	}



	return result;
}

