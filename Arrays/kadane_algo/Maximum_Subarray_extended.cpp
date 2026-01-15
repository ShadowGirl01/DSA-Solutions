// Kadane's Algorithm Extended: Maximum Subarray Sum in an Array

// Input:
//  nums = [2, 3, 5, -2, 7, -4]  
// Output:
//  15  

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 0};
	int n = 5;

    int maxSum = arr[0];
    int currSum = 0;

    int start = 0,end=0;
    int tempStart = 0;

    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
        if(currSum < 0){
            currSum  = 0;
            tempStart = i+1;
        }
    }
    
    for(int start=0;start<end;start++){
        cout<<"Maximum Sum is: "<<maxSum;
        cout<<"Subarray is: "<<arr[i];
    }
    return 0;
}
