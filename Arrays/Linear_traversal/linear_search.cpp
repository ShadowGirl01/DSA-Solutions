//linar Search
//Input:
//arr[] = 1 2 3 4 5, num = 3  
//Output: 2

//time complexity = O(n)
//space complexity = O(1)

#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int n = 5;              //size of array
	int num = 3;            //number to be found

	int index = -1;         // default if not found

	for(int i=0;i<n;i++){
		if(arr[i] == num){
			index = i;
			break;
		}
	}

	if(index != -1)
		 cout << "Number found at index: " << index;
    	else
        	cout << "Number not found";

    	return 0;
}