// Count Palindromic Substrings

// Input:s = "babad"
// Output: "bab"

// Example 2:
// Input:s = "cbbd"
// Output:"bb"

//  Time Complexity: O(n²)
//  Space Complexity: O(1)

class Solution {
public:
    int countSubstrings(string s) {
         
        int n = s.length();
        int count = 0;

        for(int i=0;i<n;i++){

            //odd palindrome
            int left = i;
            int right = i;
            while(left>=0 && right<n &&s[left] == s[right]){
                count++;
                left--;
                right++;
            }

            //even palindrome
            left = i;
            right = i+1;
            while(left>=0 && right<n && s[left] == s[right]){
                count++;
                left--;
                right++;            }
        }
        return count;
    }
};