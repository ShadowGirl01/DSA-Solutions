// 15. 3Sum

// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){

            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int left = i+1;
            int right = nums.size()-1;

            while(left < right){

                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){

                    ans.push_back({nums[i],nums[left],nums[right]});

                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }

                    while(left < right && nums[right] == nums[right+1]){
                        right--;
                    }
                }
                    else if(sum < 0){
                        left++;
                    }

                    else{
                        right--;
                    }
                
            }
        }
        return ans;
    }
};