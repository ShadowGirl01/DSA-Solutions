
// 3 Sum : Find triplets that add up to a zeroInput:
//  nums = [-1,0,1,2,-1,-4]
// Output:
//  [[-1,-1,2],[-1,0,1]]

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 0};
	int n = 5;
     
    //sorting array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

   for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue; //skip duplicates

    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = int arr[i] +arr[left] + arr[right];
        if(sum == 0){
            cout<<arr[i]<<arr[left]<<arr[right];
            while(left<right && arr[left] == arr[left+1]) left++; //skip duplicates
            while(left<right && arr[right] == arr[right-1]) right--; //skip duplicates
            left++;
            right--;
        }
        else if(sum < 0){
            left++;
        }
        else{
            right--;
    }
   }
    return 0;
}
}
