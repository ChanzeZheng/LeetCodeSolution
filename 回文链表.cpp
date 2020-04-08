#include<stdio.h>

//Definition for singly-linked list.
struct ListNode {
	int val;
	struct ListNode *next;
};



bool isPalindrome(struct ListNode* head) {
	struct ListNode* first = head;
	struct ListNode* p = first;
	while(p->next!=NULL){
		p=p->next;
	}
	struct ListNode* last = p;
	last->next = first;	//Ñ­»·Á´±í
	 

}



int main() {
	
	

}
