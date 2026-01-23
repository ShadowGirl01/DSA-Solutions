//  Reverse Words in a String

//  Input: s = "the sky is blue"
//  Output: "blue is sky the"

//  Time Complexity: O(N)
//  Space Complexity: O(1)

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();

        vector<string> words;
        string word = "";

        int i=n-1;
        while(i>=0){
            
            while(i>=0 && s[i]== ' ') i--;
            if(i<0) break;
            int j = i;
            while(j>=0 && s[j] != ' ') j--;

            word = "";
            for(int k=j+1;k<=i;k++){
                word += s[k];
            }
            words.push_back(word);
            i = j-1;
        }

        string result = "";
        for(int i=0;i<words.size();i++){
            result += words[i];
            if(i != words.size()-1){
                result += " ";
            }
        }
        return result;
    }
};