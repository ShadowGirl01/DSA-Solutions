//  Minimum number of bracket reversals needed to make an expression balanced

//  Input : s = ")(())((("
//  Output : 3

//  Time Complexity: O(n)
//  Space Complexity: O(1)


class Solution {
public:
    int maxDepth(string s) {

        int n = s.length();

        if(n % 2 != 0){            
            return -1;
        }

        stack<char> st;

        for(int i = 0; i < n; i++){
            if(s[i] == '{'){
                st.push('{');     
            }
            else{
                if(!st.empty() && st.top() == '{'){  
                    st.pop();
                } else {
                    st.push('}');
                }
            }
        }

        int open = 0;
        int close = 0;

        while(!st.empty()){       
            if(st.top() == '{'){
                open++;
            } else {
                close++;
            }
            st.pop();              
        }

        int result = (open + 1) / 2 + (close + 1) / 2;  
        return result;
    }
};
