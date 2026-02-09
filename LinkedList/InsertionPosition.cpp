
// Insert at Position (kth Node)

class Solution {
public:
    ListNode* insertAtPosition(ListNode* head, int x, int k) {

        if(k==1){
            listNode* newNode = new listNode(x);
            listNode* head = newNode;
            return head;
        }

        listNode* temp = head;
        for(int i=0;temp != nullptr && i<k-1;i++){
            temp = temp-> next;
        }

        if(temp == nullptr) return head;

        listNode* newNode = new listNode(x);

        newNode -> next = temp->next;
        temp->next = newNode;

        return head;
    }
};




// Insert Node at specific position (after node with given target value)

class Solution {
public:
    ListNode* insertBeforeTarget(listNode* head, int x, int target) {

        if(head == nullptr) return nullptr;

         // If target is at head
        if(head->val == target) {
            ListNode* newNode = new ListNode(x);
            newNode->next = head;
            return newNode;
        }

        listNode* temp = head;
        
        while(temp->next != nullptr && temp->next->val != target) {
            temp = temp->next;
        }

        // If target found
        if(temp->next != nullptr) {

            // Create new node
            ListNode* newNode = new ListNode(x);

            // Insert in between
            newNode->next = temp->next;
            temp->next = newNode;
        }

        return head;
    }
};