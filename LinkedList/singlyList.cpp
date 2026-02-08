//  Linked List : Introduction

//  input: 10->20->30->Nullptr


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
    void singlyNode(listNode* node) {

        listNode* temp = head;  // start of the node
	
	while(temp != nullptr){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
    }
};