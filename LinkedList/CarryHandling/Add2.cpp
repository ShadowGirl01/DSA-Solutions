//	2. Add Two Numbers

//	Input: l1 = [2,4,3], l2 = [5,6,4]
//	Output: [7,0,8]
//	Explanation: 342 + 465 = 807.

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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       

       int carry = 0;
       ListNode* result = nullptr;
       ListNode* tail = nullptr;

       while(l1 != nullptr || l2 != nullptr || carry>0){

        int sum = carry;
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }

        int digit = sum % 10;
        carry = sum / 10;

        ListNode* newNode = new ListNode(digit);

        if(result == nullptr){
            result = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
       }
      
        return result;
    }
};