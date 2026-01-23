//  Reverse Words in a String

//  Input: s =  "Let's take LeetCode contest"
//  Output: "s'teL ekat edoCteeL tsetnoc"

//  Time Complexity: O(n)
//  Space Complexity: O(1)


class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> words;
        string word = "";

        // Split the string into words
        for(int i = 0; i < s.length(); i++){     
            if(s[i] == ' '){                      
                if(word != "") {                  
                    words.push_back(word);
                    word = "";                    
                }
            } else{
                word += s[i];
            }
        }
        if(word != "") words.push_back(word);     

        // Reverse each word
        for(int i = 0; i < words.size(); i++){
            int left = 0;
            int right = words[i].length() - 1;      

            while(left < right){
                char temp = words[i][left];
                words[i][left] = words[i][right];
                words[i][right] = temp;
                left++;                              
                right--;                            
            }
        }

       
        string result = "";
        for(int i = 0; i < words.size(); i++){
            result += words[i];
            if(i != words.size() - 1) result += " ";
        }

        return result;                              
    }
};
