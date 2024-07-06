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
    int strStr(string haystack, string needle) {
        int size1 = haystack.length(), size2 = needle.length();
        if (size1 < size2 || size2 == 0) return -1;

        for(int i = 0; i <= size1 - size2; ++i) {
            int j = 0;
            while(j < size2 && haystack[i+j] == needle[j]){
                j++;
            }
            if(j == size2) return i;
        }
        return -1;
    }
};

int main() {
    string s1 = "abc", s2 = "c";
    Solution solution;
    cout << solution.strStr(s1, s2) << endl;
    return 0;
}