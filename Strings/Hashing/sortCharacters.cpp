//  Sort Characters By Frequency

//  Input: s = "tree"
//  Output: "eert"

//  Time Complexity: O(n²)
//  Space Complexity: O(1)

class Solution {
public:
    string frequencySort(string s) {
        
        int freq[256] = {0};

        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }

        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(freq[s[i]]<freq[s[j]]){
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        return s;
    }
};