Length of Loop in Linked List


//  Input: 1 → 2 → 3 → 4 → 5
          	    ↑      ↓
         	     ← ← ← ←
//  Output: 3


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
    int lengthLoop(ListNode *head) { 
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr) {   
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                int count = 1;
                ListNode* temp = slow->next;  
                while(temp != slow){
                    count++;
                    temp = temp->next;         
                }
                return count;
            }
        }

        return 0;   
    }
};
