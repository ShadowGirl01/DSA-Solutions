//Q2.check if array is sorted
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.

//time complexity = O(n)
//space complexity = O(1)


#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
	int n = 5;

bool isSorted = true;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            isSorted = false;
            break;
        }
    }
    return 0;
}