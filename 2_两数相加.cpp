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
	//跳出循环说明某一条链表已经没有节点了

	if(q != NULL) {         		//p达到了最后的节点
		k->next = q;
	} else {							//q或者两个节点都达到最终节点，分别对应k接着指向p或者指向null
		k->next = p;
	}

	while(flag) {					//当需要进位
		if(k->next==NULL) {			//先判断是否是最终节点，如果是，则直接创建一个新节点，值为1
			k->next = new ListNode;
			k->next->val = 1;
			k->val %=10;
			break;					//退出循环
		}
		k = k->next;
		k->val++;					//由于flag，说明需要进位 
		if(k->val > 9) {			
			flag=1;
			k->val%=10;
		} else {
			flag=0;					//标志不再需要进位，可以退出循环
		}
	}

	return result->next;
}


}






int main() {

	return 0;
}

