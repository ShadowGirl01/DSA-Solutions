//  Maximum Nesting Depth of the Parentheses

//  Input: s = "(1+(2*3)+((8)/4))+1"
//  Output: 3

//  Time Complexity: O(n)
//  Space Complexity: O(1)

class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int maxLength = 0;

        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                open++;
                if(maxLength < open){
                    maxLength = open;
                }
            }
            if(s[i] == ')'){
                open--;
            }
        }
        return maxLength;
    }
};