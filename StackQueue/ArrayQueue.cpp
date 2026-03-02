//	Implement Queue using Array

//	Input: ["ArrayStack", "push", "push", "top", "pop", "isEmpty"]  
//		[[], [5], [10], [], [], []]  
//	Output:
//	  [null, null, null, 10, 10, false] 


class MyQueue {
public:
int arr[1000];
int front;
int rear;

MyQueue(){
front = -1;
rear = -1;
}

void enqueue(int x){
 if(front == -1) front = 0;
rear++;
arr[rear] = x;
}

int pop(){
   if(front == -1 || front > rear) return -1;	// prevents underflow
int val = arr[front];
front++;
return val;
}

int peek(){
   if(front == -1 || front > rear) return -1; 
return arr[front];
}

bool isEmpty(){
return (front == -1 || front > rear);
}
};