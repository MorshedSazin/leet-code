#include <bits/stdc++.h>
using namespace std;
/*
            ^__^     
            (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/

class Solution {
public:
    string reverseWords(string s) {
        s.erase(0, s.find_first_not_of(" \t"));
        s.erase(s.find_last_not_of(" \t") + 1);

        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }


        reverse(words.begin(), words.end());

        string result = "";
        for (int i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i < words.size() - 1) {
                result += " ";
            }
        }

        return result;
    }
};

int main() {
    string vrc = "  hello world  ";
    Solution s1;
    cout << s1.reverseWords(vrc) << endl;
    return 0;
}
