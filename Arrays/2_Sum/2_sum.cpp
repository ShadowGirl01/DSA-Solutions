
// Two Sum : Check if a pair with given sum exists in Array
// Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Output : YES

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 0};
	int n = 5;
    int target = 5;
     
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

    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout<<"YES";
            return 0;
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

// 2 sum problem (indecies)
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       for(int i=0;i<nums.size();i++){
        int needed = target-nums[i];
        if(mp.find(needed)!=mp.end()){
            return {mp[needed],i};
        }
        mp[nums[i]] = i;
       }
    return {};
    }
};
