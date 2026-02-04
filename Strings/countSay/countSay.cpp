// 38. Count and Say

// Input: 4
// Output: "1211"
// Explanation:  
// countAndSay(1) = "1"
// countAndSay(2) = RLE of "1" = "11"
// countAndSay(3) = RLE of "11" = "21"
// countAndSay(4) = RLE of "21" = "1211"

//  Time Complexity: O(n * 2^n)
//  Space Complexity: O(2^n)

class Solution {
public:
    string countAndSay(int n) {
        
        string ans = "1";

        for(int step = 2;step<=n;step++){
            string temp = "";
            int count=1;
            for(int i=0;i<ans.size();i++){
                if(i+1 < ans.size() && ans[i]==ans[i+1]){
                    count++;
                }
                else{
                    temp += (count + '0');
                    temp += ans[i];
                    count = 1;
                }
            }
            ans = temp;
        }
        return ans;
    }
};