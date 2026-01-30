//  Hashing in Strings

//  Input: aabbca

#include <iostream>
using namespace std;

int main() {
    string s = "abbca";

    int freq[26] = {0};   // 26 boxes

    // walk through string
    for(int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';   // convert letter to box number
        freq[index]++;
    }

    // print result
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            char ch = i + 'a';
            cout << ch << " -> " << freq[i] << endl;
        }
    }

    return 0;
}
