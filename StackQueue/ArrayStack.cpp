//	Implement Stack using Array

//	Input: ["ArrayStack", "push", "push", "top", "pop", "isEmpty"]  
//		[[], [5], [10], [], [], []]  
//	Output:
//	  [null, null, null, 10, 10, false] 


class MyStack {
public:
int arr[1000];
int topIndex;

MyStack(){
topIndex = -1;
}

void push(int x){
 if(topIndex == 999) return;
topIndex++;
arr[topIndex] = x;
}

int pop(){
 if(topIndex == -1) return -1;	// prevents underflow
int val = arr[topIndex];
topIndex--;
return val;
}

int top(){
 if(topIndex == -1) return -1;
return arr[topIndex];
}

bool isEmpty(){
if(topIndex == -1) return true;
else return false;
}
};