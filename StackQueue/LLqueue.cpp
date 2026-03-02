//	Implement Queue using Linked List

//	Input: ["LinkedQueue", "push", "push", "top", "pop", "isEmpty"]  
//		[[], [5], [10], [], [], []]  
//	Output:
//	  [null, null, null, 10, 10, false] 


class Queue {
public:

ListNode* front;
ListNode* rear;

Queue(){
front = nullptr;
rear = nullptr;
}

void enqueue(int x){
ListNode* newNode = new ListNode(x);
if(rear == nullptr){
front = rear = newNode;
return;
}
rear->next = newNode;
rear = newNode;
}

void dequeue(){
if(front == nullptr) return;

ListNode* temp = front;
front = front->next;
if(front == nullptr){
rear = nullptr;
}
delete temp;
}

int peek(){
if(front == nullptr) return -1;
return front->val;
}

bool isEmpty(){
return (front == nullptr);
}
};