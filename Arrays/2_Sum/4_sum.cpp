
// 4 Sum | Find Quads that add up to a target value
// Input Format:arr[] = [1,0,-1,0,-2,2], target = 0
// Result: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,0,-1,0,-2,2};
	int n = 6;
    int target = 0;
     
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

    for(int j=i+1;j<n;j++){
        if(j<0 && arr[j] == arr[j-1]) continue; //skip duplicates   
    }

    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = int arr[i] +arr[j] +arr[left] + arr[right];
        if(sum == target){
            cout<<arr[i]<<arr[left]<<arr[right];
            cout << "[" << arr[i] << "," << arr[j]
             << "," << arr[left] << "," << arr[right] << "]\n";

                    left++;
                    right--;

            while(left<right && arr[left] == arr[left+1]) left++; //skip duplicates
            while(left<right && arr[right] == arr[right-1]) right--; //skip duplicates

        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
    }
   }
    return 0;
}
}

