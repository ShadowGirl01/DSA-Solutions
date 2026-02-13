// Search an element in a Linked List

// Input: 0->1->2, val = 2
// Output: True

// Time Complexity: O(N)
// Space Complexity: O(1)


class Solution {
public:
    bool searchInLinkedList(ListNode* head, int x) {

        listNode* temp = head;

        while(temp != nullptr){
            if(temp->val == x){
                return true;
            }
            temp = temp->next;
        }

        return false;
    }
};