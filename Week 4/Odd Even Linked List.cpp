/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {

		if ((!head) || (!head->next)) return head;

		ListNode* odd = head;
		ListNode* even = head->next;
		ListNode* headOdd = head;
		ListNode* headEven = head->next;



		while (odd&&even) {


			if (odd->next) {
				odd->next = odd->next->next;
				if (odd->next) odd = odd->next;
			}
			else break;



			if (even->next) {
				even->next = even->next->next;
			}
			even = even->next;


		}


		odd->next = headEven;





		return headOdd;

	}
};


//HEAVY TESTING

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//	ListNode* oddEvenList(ListNode* head) {
//
//		if ((!head) || (!head->next)) return head;
//
//		ListNode* odd = head;
//		ListNode* even = head->next;
//		ListNode* headOdd = head;
//		ListNode* headEven = head->next;
//		int count = 0;
//
//		cout << odd->val << endl;
//		cout << even->val << endl;
//		cout << "-----------" << endl;
//		while (odd&&even) {
//			++count;
//			cout << "This is count: " << count << endl;
//
//			if (odd->next) {
//				odd->next = odd->next->next;
//				if (odd->next) odd = odd->next;
//			}
//			else break;
//
//			if (odd) cout << odd->val << endl;
//
//			if (even->next) {
//				even->next = even->next->next;
//			}
//			even = even->next;
//
//			if (even) cout << even->val << endl;
//		}
//		cout << "-----------" << endl;
//		if (odd) cout << odd->val << endl;
//		if (even) cout << even->val << endl;
//
//		odd->next = headEven;
//
//
//
//
//
//		return headOdd;
//
//	}
//};
