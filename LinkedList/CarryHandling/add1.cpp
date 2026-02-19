//	Add 1 to a number represented by LL

//	Input: 4->5->6
//	Output: 4->5->7
//	Explanation: 456 + 1 = 457


//	Time Complexity: O(n+m)
//	Space Complexity: O(1)


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* Reverse(ListNode* head){
ListNode* prev = nullptr;
ListNode* curr = head;

while(curr != nullptr){
ListNode* nextNode = curr->next;
curr->next = prev;
prev = curr;
curr = nextNode;
}
return prev;
}
    ListNode* addOneNumber(ListNode* head) {
        
head = reverse(head);

ListNode* temp = head;
int carry = 1;

while(temp != nullptr && carry>0){
int sum = temp->data + carry;
temp->data = sum % 10;
carry = sum / 10;

if(temp->next != nullptr && carry>0){
temp->next = new node(carry);
carry = 0;
}
temp = temp->next;
}
head = reverse(head);

return head;
    }
};