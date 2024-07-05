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

        vector<string> words;
        stringstream ss(s);
        string word, result = "";

        while (ss >> word) words.push_back(word);
        
        reverse(words.begin(), words.end());
        for(int i = 0; i < words.size(); ++i) result += words[i]+' '; 
        
        result.erase(result.find_last_not_of(" \t") + 1);
        return result;
    }
};

int main() {
    string vrc = "  hello world  ";
    Solution s1;
    cout << s1.reverseWords(vrc) << endl;
    return 0;
}
