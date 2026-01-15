// Find Second Smallest and Second Largest Element in an array

// Input:
//  [1, 2, 4, 7, 7, 5]  
// Output:
  
// Second Smallest : 2  
// Second Largest : 5 

//time complexity = O(n)
//space complexity = O(1)


#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 0};
	int n = 5;

    int largest = arr[0];
    int second_largest = arr[0];
    int smallest = arr[0];
    int second_smallest = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        if(arr[i]>second_largest && arr[i]<largest){
            arr[i] = second_largest;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        if(arr[i]<second_smallest && arr[i]>smallest){
            second_smallest = arr[i];
        }
    }
    cout<<second_largest;
    cout<<second_smallest;
    return 0;
}

