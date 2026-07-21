// 485. Max Consecutive Ones

// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. 
// The maximum number of consecutive 1s is 3.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int num : nums){
            if(num == 1){
                count++;
                maxi = max(maxi,count);
            }
            else{
                count=0;
            }
        }
        return maxi;
    }
};