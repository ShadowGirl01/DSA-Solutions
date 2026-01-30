//  check whether one string is a rotation of another

//  Input: s = "abcde", goal = "cdeab"
//  Output: true

//  Time Complexity: O(n)
//  Space Complexity: O(n)


class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length()){
            return false;
        } 

        string temp = s+s;
        if(temp.find(goal) != string::npos){
            return true;
        }
        return false;
    }
};