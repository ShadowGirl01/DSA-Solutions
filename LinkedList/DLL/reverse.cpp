//  input: nullptr ← 10 ↔ 20 ↔ 30 ↔ 40 → nullptr
//  output: nullptr ← 40 ↔ 30 ↔ 20 ↔ 10 → nullptr


class Solution {
public:
    Node* reverseDLL(Node* head) {

if(head == nullptr && head->next == nullptr){
return head;
}

node* temp = head;
node* newHead = nullptr;

while(temp != nullptr){

temp = newHead;

node* oldNext = temp->next;
temp->next = temp->prev;
temp->prev = oldNext;
temp = oldNext;
}
return newHead;
}
};