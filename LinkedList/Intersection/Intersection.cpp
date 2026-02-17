//	160. Intersection of Two Linked Lists

//	Input: List 1 = [1,3,1,2,4], List 2 = [3,2,4]
//	Output: 2

//	Time Complexity: O(n+m)
//	Space Complexity: O(1)



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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == nullptr || headB == nullptr) return nullptr;

        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b){
            if(a == nullptr) a = headB;
            else a = a->next;

            if(b == nullptr) b = headA;
            else b = b->next;
        }
        return a;
    }
};