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
    string intToRoman(int num) {
        vector<pair<string, int>> mp {
            {"M",1000},
            {"CM",900},
            {"D", 500},
            {"CD",400},
            {"C", 100},
            {"XC", 90},
            {"L",  50},
            {"XL", 40},
            {"X",  10},
            {"IX",  9},
            {"V",   5},
            {"IV",  4},
            {"I",   1}
        };
        vector<int> roman(13, 0);
        string result = "";
        for (int i = 0; i < mp.size(); ++i) {
            while (num >= mp[i].second) {
                int temp = num / mp[i].second;
                roman[i] += temp;
                num %= mp[i].second;
            }
        }
        for (int i = 0; i < roman.size(); ++i) {
            while (roman[i] != 0) {
                result += mp[i].first;
                roman[i]--;
            }
        }
        return result;
    }
};

int main() {
    int vec = 4749;
    Solution sl;
    cout << sl.intToRoman(vec) << endl;
}
