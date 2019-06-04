// Reverse Linked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct ListNode {
	ListNode(int x) : val(x), next(NULL) {}
	int val;
	ListNode *next;

};

ListNode* reverseLinkedList(ListNode* head) {

	
	if (!head||!head->next) return head;
	
	ListNode* begOfList = reverseLinkedList(head->next);
	ListNode* headOfList = begOfList;
	ListNode* addToEnd = head;

	

	
	while (begOfList->next)
	{
		begOfList = begOfList->next;
	}
	begOfList->next = addToEnd;
	
	addToEnd->next = NULL;
	


	
	

	return headOfList;


}



int main()
{
	//std::cout << "Hello World!\n"; 

	//ListNode* a();
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;

	ListNode* head = &a;
	ListNode* temp = head;

	while (temp) {
		cout << temp->val << endl;
		temp = temp->next;

	}
	cout <<"-----------------------------------" << endl;


	ListNode* nHead = reverseLinkedList(head);
	while (nHead) {
		cout << nHead->val << endl;
		nHead = nHead->next;

	}
	/*cout << "-----------------------------------" << endl;
	
	cout << nHead->val << endl;
	cout << nHead->next->val << endl;*/
	/*cout << nHead->next->next->val << endl;
	cout << nHead->next->next->next->val << endl;
	cout << nHead->next->next->next->next->val << endl;*/
	
	
}

