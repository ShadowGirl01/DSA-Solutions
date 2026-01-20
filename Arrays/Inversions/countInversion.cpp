//  Count inversions in an array
//  Input Format: N = 5, array[] = {1,2,3,4,5}
//  Result: 0

#include<iostream>
using namespace std;

long long Merge(int arr[],int temp,int left, int mid,int right){
	
	int i=left;
	int j=mid+1;
	int k = left;
	int invCount = 0;

	while(i<=mid && j<=right){
		if(arr[i]<arr[j]){
			temp[k++] = arr[i];
		} else {
			temp[k++] = arr[j];
			invCount += arr[k-i+1];
		}

		while(i<left)  temp[i] = arr[i];
		while(j<right) temp[j] = arr[j];

		for(int p=left;p<right;p++){
			arr[p] = temp[p];
		}
	}	
return invCount;

}


long long mergeSort(int arr[], int temp[], int left, int right) {
    long long invCount = 0;

    if (left < right) {
        int mid = (left + right) / 2;

        invCount += mergeSort(arr, temp, left, mid);
        invCount += mergeSort(arr, temp, mid + 1, right);
        invCount += merge(arr, temp, left, mid, right);
    }

    return invCount;
}

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int n = 5;
    int temp[5];

    cout << "Total Inversions = "
         << mergeSort(arr, temp, 0, n - 1);

    return 0;
}