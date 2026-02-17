//	148. Sort List

//	Input: head = [4,2,1,3]
//	Output: [1,2,3,4]

//	Time Complexity: O(n log n)
//	Space Complexity: O(log n)


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
    ListNode* merge(ListNode* head1,ListNode* head2) {
        if(head1 == nullptr) return head2;
        if(head2 == nullptr) return head1;

        ListNode* result = nullptr; 
        
        if(head1->val <= head2->val){
            result = head1;
            result->next = merge(head1->next,head2);
        }
        else{
            result = head2;
            result->next = merge(head2->next,head1);
        }

        return result;
    }

    ListNode* getMiddle(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;

        ListNode* mid = getMiddle(head);

        ListNode* left = head;
        ListNode* right = mid->next;

        mid->next = nullptr;
        left = sortList(left);
        right = sortList(right);

        return merge(left,right);
    }
};