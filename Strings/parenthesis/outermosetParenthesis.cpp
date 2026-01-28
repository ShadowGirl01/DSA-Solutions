//  Remove Outermost Parentheses

//  Input: s = "(()())(())"
//  Output: "()()()"

//  Time Complexity: O(n)
//  Space Complexity: O(1)

class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0;
        string result = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                if(open>0) {
                    result += '(';
                }
                open++;
            } 
            else {
                open--;
                if(open>0){
                    result += ')';
                }
            }
        }
        return result;
    }
};