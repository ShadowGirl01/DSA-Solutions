
// Largest Odd Number in a String.
// Input:
//  s = "5347"
// Output:
//  "5347"

//  Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    string largestOddNumber(string num) {

        for (int i = num.size(); i-- > 0; ) {
            int digit = num[i] - '0';
            if (digit % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
