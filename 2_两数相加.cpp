#include <iostream>
using namespace std;



struct ListNode {
	int val;
	struct ListNode *next;
};


void print_arr(int arr[], int n) {
	cout<<"{";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"}";
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode * p = l1;
	struct ListNode * q = l2;
	struct ListNode * result = new ListNode;
	struct ListNode * k = result;
	int flag = 0;
	while(p != NULL && q != NULL) {
		k->next = new ListNode;
		k = k->next;
		k->val = p->val + q->val;
		if(flag) {
			k->val++;
		}
		flag = 0;
		if(k->val >= 10) {
			flag = 1;
			k->val %= 10;
		}
		p=p->next;
		q=q->next;
	}
	//����ѭ��˵��ĳһ�������Ѿ�û�нڵ���

	if(q != NULL) {         		//p�ﵽ�����Ľڵ�
		k->next = q;
	} else {							//q���������ڵ㶼�ﵽ���սڵ㣬�ֱ��Ӧk����ָ��p����ָ��null
		k->next = p;
	}

	while(flag) {					//����Ҫ��λ
		if(k->next==NULL) {			//���ж��Ƿ������սڵ㣬����ǣ���ֱ�Ӵ���һ���½ڵ㣬ֵΪ1
			k->next = new ListNode;
			k->next->val = 1;
			k->val %=10;
			break;					//�˳�ѭ��
		}
		k = k->next;
		k->val++;					//����flag��˵����Ҫ��λ 
		if(k->val > 9) {			
			flag=1;
			k->val%=10;
		} else {
			flag=0;					//��־������Ҫ��λ�������˳�ѭ��
		}
	}

	return result->next;
}


}






int main() {

	return 0;
}

