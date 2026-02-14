//  234. Palindrome Linked List

//  Input: head = [1,2,2,1]
//  Output: true

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
ListNode* Reverse(ListNode* Head){
    ListNode* prev = nullptr;
    ListNode* curr = Head;
    ListNode* nextNode = nullptr;

    while(curr != nullptr){
        nextNode = curr->next;
        curr->next = prev;

        prev = curr;          
        curr = nextNode;      
    }
    return prev;
}

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* SecondHalf = Reverse(slow);
        ListNode* FirstHalf = head;

        while(SecondHalf != nullptr){
            if(FirstHalf->val != SecondHalf->val){
                return false;
            }
            FirstHalf = FirstHalf->next;
            SecondHalf = SecondHalf->next;
        }
        return true;
    }
};