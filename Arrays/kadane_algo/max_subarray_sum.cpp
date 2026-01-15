// Kadane's Algorithm : Maximum Subarray Sum in an Array

// Input:
//  nums = [2, 3, 5, -2, 7, -4]  
// Output:
//  15  

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 0};
	int n = 5;

    int maxSum = 0;
    int currSum = 0;

    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum  = 0;
        }
    }
    return maxSum;
}
