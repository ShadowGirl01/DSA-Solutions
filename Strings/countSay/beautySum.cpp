1781. Sum of Beauty of All Substrings

Input: s = "aabcb"
Output: 5

// Time Complexity:
// Outer loop: O(n) (for each starting index)
// Inner loop: O(n) (for each ending index)
// Computing max and min for frequencies: O(26) in the worst case (since only lowercase letters), O(n^2 * 26) ≈ O(n^2) because 26 is constant.

// Space Complexity:
// Frequency map uses at most 26 characters → O(26) = O(1).
// No extra data structures apart from that.

class Solution {
public:
    int beautySum(string s) {

      int n = s.length();
      int totalBeauty = 0;

      for(int i=0;i<n;i++){
        int freq[26] = {0};
        for(int j=i;j<n;j++){
            freq[s[j]-'a']++;

            int maxfreq = 0;
            int minfreq = 1000;

            for(int k=0;k<26;k++){
                if(freq[k]>0){

                    if(freq[k]>maxfreq){
                        maxfreq = freq[k];
                    }
                    if(freq[k]<minfreq){
                        minfreq = freq[k];
                    }
                }
            }
            totalBeauty += (maxfreq-minfreq);
        }
      }  
      return totalBeauty;
    }
};