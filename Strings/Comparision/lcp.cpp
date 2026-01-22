//  Longest Common Prefix
//  Input:
//  str = ["flower", "flow", "flight"]
//  Output:
//  "fl"

//  tc: O(N * log N + M)
//  sc:  O(M)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = "";

        // Traverse characters of first string
        for(int i=0;i<strs[0].length();i++){
            char ch = strs[0][i];

            // Compare with same index of all strings
            for(int j=1;j<strs.size();j++){
                 // if index out of range OR mismatch
                 if(i>=strs[j].length() || strs[j][i]!=ch){
                    return prefix;
                 }
            }
            prefix += ch;
        }
        
        return prefix;
    }
};