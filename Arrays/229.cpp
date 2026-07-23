// 229. Majority Element II

// Example 1:
// Input: nums = [3,2,3]
// Output: [3]

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int, int> mp;
        vector<int> ans;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto it : mp) {
            if (it.second > nums.size() / 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};