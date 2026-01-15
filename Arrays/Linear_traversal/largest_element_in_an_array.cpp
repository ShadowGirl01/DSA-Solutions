// Input:
//  arr[] = {2, 5, 1, 3, 0}  
// Output:
//  5  

//time complexity = O(n)
//space complexity = O(1)


#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 0};
	int n = 5;

    int largest = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest;
    return 0;
}