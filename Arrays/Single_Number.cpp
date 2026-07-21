// 136. Single Number

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};