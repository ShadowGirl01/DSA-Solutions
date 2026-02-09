//  deletion At Head


class Solution {
public:
    ListNode* DeleteAtHead(listNode* head) {
	
	if(head == nullptr) return nullptr;

	listNode* temp = head;
	head = head->next;
	delete temp; 
	return head;       
    }
};



//  Delete At Tail


class Solution {
public:
    ListNode* DeleteAtTail(listNode* head) {

	if(head == nullptr) return nullptr;

	if(head->next = nullptr){
		delete head;
	return nullptr;
    }

    listNode* temp = head;
    while(temp->next->next != nullptr){
	temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
    }
};
