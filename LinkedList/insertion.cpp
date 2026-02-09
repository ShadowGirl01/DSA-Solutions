//  Insertion At Head


class Solution {
public:
    ListNode* insertAtHead(listNode* head, int x) {

        listnode* newNode = new listNode(x);
        newNode-> next = head;
        head = newNode;
        return head;
    }
};


//  Insert At Tail

class Solution {
public:
    ListNode* insertAtTail(listNode* head, int x) {

        listnode* newNode = new listNode(x);
        
        if( head == nullptr){
            return newNode;
        }

        listNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }

        temp -> next = newNode;
        return head;
    }
};