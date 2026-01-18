
// Count Maximum Consecutive One's in the array
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3

#include<iostream>
using namespace std;    
int main(){
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = 6;

    int maxCount = 0;
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(maxCount,count);
        }
        else{
            count = 0;
        }
    }
    cout<<maxCount;
    return 0;
}