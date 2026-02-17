//	Sort a Linked List of 0's 1's and 2's by changing links

//	Input: 1 -> 2 -> 0 -> 1 -> 0 -> 2 -> NULL
//	Output: 0 -> 0 -> 1 -> 1 -> 2 -> 2 -> NULL

//	Time Complexity: O(n)
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
    ListNode* Sort012(ListNode* head) {

if(head == nullptr){
return nullptr;
}
        
ListNode* zerodummy = new ListNode(-1);
ListNode* onedummy = new ListNode(-1);
ListNode* twodummy = new ListNode(-1);

ListNode* zeroTail = zerodummy;
ListNode* oneTail = onedummy;
ListNode* twoTail = twodummy;

ListNode* curr = head;

while(curr != nullptr){
if(curr->val == 0){
zeroTail->next = curr;
zeroTail = zeroTail->next;
}
if(curr->val == 1){
oneTail->next = curr;
ooneTail = oneTail->next;
}
if(curr->val == 2){
twoTail->next = curr;
twoTail = twoTail->next;
}
curr = curr->next;
}

twoTail->next = nullptr;

if(onedummy->next != nullptr){
zeroTail->next = onedummy->next;
} 
else{
zeroTail->next = twodummy->next;
}

oneTail->next = twodummy->next;

head = zerodummy->next;
return head;

    }
};