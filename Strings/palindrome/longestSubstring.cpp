// 647. Palindromic Substrings

// Input:s = "babad"
// Output: "bab"

// Example 2:
// Input:s = "cbbd"
// Output:"bb"

//  Time Complexity: O(n²)
//  Space Complexity: O(1)

class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.length();
        int start = 0;
        int maxlen = 1;

        for(int i=0;i<n;i++){

            //odd string
            int left = i;
            int right = i;
            while( left>=0 && right<n && s[left] == s[right]){
                int len = right-left+1;
                if(maxlen<len){
                    maxlen = len;
                    start = left;
                }
                left--;
                right++;
            }

            //even string
            left = i;
            right = i+1;
            while(left>=0 && right<n && s[left] == s[right]){
                int len = right-left+1;
                if(maxlen<len){
                    maxlen = len;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxlen);
    }
};