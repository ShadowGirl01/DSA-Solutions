//	Implement Stack using Linked List

//	Input: ["ArrayStack", "push", "push", "top", "pop", "isEmpty"]  
//		[[], [5], [10], [], [], []]  
//	Output:
//	  [null, null, null, 10, 10, false] 


class Stack(){
public:
ListNode* top;

stack(){
top = nullptr;
}

void push(int x){
ListNode* newNode = new ListNode(x);
newNode->next = top;
top = newNode;
}

void pop(){
if(top == nullptr) return;
else{
ListNode* temp = top;
top = top->next;
delete temp;
}
}

int peek(){
if(top == nullptr) return -1;
return top->val;
}

bool isEmpty(){
return (top == nullptr);
}
};
