#define Node struct TreeNode

 int solution(Node* root,int flag) {
	 int leftTreeSum, rightTreeSum;						//����������Ҷ��֮�ͣ�����������Ҷ��֮��
	 leftTreeSum = rightTreeSum = 0;					//��ʼ��Ϊ0
	 if (!root->left && !root->right && flag) {		//��Ҷ�ӽڵ�
		 return root->val;
	 }
	 if (!root->left && !root->right) {				//��Ҷ�ӽڵ�
		 return 0;
	 }
	 if (root->left) {
		 leftTreeSum = solution(root->left, 1);				//��־Ϊ��ڵ�
	 }
	 if (root->right) {
		 rightTreeSum = solution(root->right, 0);			//��־Ϊ�ҽڵ�
	 }
	 return leftTreeSum + rightTreeSum;
 }


int sumOfLeftLeaves(struct TreeNode* root) {
    if(!root){
        return 0;
    }
    return solution(root, 0);
	
	
	
}