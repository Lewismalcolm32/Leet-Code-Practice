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

void reverseLinkedList(ListNode* head) {

	if (!head) return head;
	if (!head->next)
	{
		cout << head->val << endl;
		cout << head->val << endl;
		return; 
	}

	//Print Values in original order
	ListNode* temp = head;
	while (temp)
	{
		//cout << temp->val << endl;
		cout << temp->val << endl;
		temp = temp->next;

	}

	//reverse linked list
	ListNode* past = head;
	ListNode* present = head->next;
	ListNode* future = head->next->next;

	past->next = NULL;
	while (future) {
		present->next = past;
		past = present;
		present = future;
		future = future->next;
	}
	present->next = past;


	//print reversed linked list
	ListNode* temp2 = present;
	while (temp2)
	{
		//cout << temp->val << endl;
		cout << temp2->val << endl;
		temp2 = temp2->next;

	}

}



int main()
{
    std::cout << "Hello World!\n"; 

	//ListNode* a();
	ListNode a(1); 
	ListNode b(2);
	/*ListNode c(3);
	ListNode d(4);*/

	a.next = &b;
	/*b.next = &c;
	c.next = &d;*/
	b.next = NULL;

	ListNode* head = &a;





	reverseLinkedList(head);
}



// Reverse Linked List (Iteratively) Leetcode 
//
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     ListNode(int x) : val(x), next(NULL) {}
// *
// *     int val;
// *     ListNode *next;
// *
// * };
// */
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		if (!head) return head;
//		if (!head->next) return head;
//
//		//reverse linked list
//		ListNode* past = head;
//		ListNode* present = head->next;
//		ListNode* future = head->next->next;
//
//		past->next = NULL;
//		while (future) {
//			present->next = past;
//			past = present;
//			present = future;
//			future = future->next;
//		}
//		present->next = past;
//
//		return present;
//	}
//};