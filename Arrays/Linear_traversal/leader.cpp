
// Leaders in an ArrayInput:
//  arr = [10, 22, 12, 3, 0, 6]  
// Output:
//  22 12 6
  
#include<iostream>  
using namespace std;
int main(){  
    int arr[] = {10, 22, 12, 3, 0, 6};
    int n = 6;

    int max_from_right = arr[n-1];
    cout<<max_from_right<<" "; //rightmost element is always a leader

    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_from_right){
            max_from_right = arr[i];
            cout<<max_from_right<<" ";
        }
    }
    return 0;
}