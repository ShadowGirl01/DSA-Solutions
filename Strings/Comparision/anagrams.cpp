//  Check if two Strings are anagrams of each other
//  Input: RULES, LESRT 
//  Output: false


#include <iostream>
using namespace std;

int main() {
    char s1[] = "RULES";
    char s2[] = "LESRT";

    int count[26] = {0};

    // Count first string
    for(int i = 0; s1[i] != '\0'; i++) {
        count[s1[i] - 'A']++;
    }

    // Remove second string
    for(int i = 0; s2[i] != '\0'; i++) {
        count[s2[i] - 'A']--;
    }

    // Final check
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}
