// 152. Maximum Product Subarray

// Example 1:
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minProd = nums[0];
        int maxProd = nums[0];
        int ans = nums[0];

        for(int i=1;i<nums.size();i++){

            if(nums[i] < 0){
                swap(maxProd,minProd);
            }

            minProd =min(nums[i], minProd * nums[i]);

            maxProd = max(nums[i], maxProd * nums[i]);

            ans = max(maxProd,ans);
        }
        return ans;
    }
};