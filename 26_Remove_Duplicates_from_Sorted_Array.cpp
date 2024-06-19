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
  int romanToInt(String s) {
      Map<String, int> romanMap = {
      "I": 1,
      "V": 5,
      "X": 10,
      "L": 50,
      "C": 100,
      "D": 500,
      "M": 1000,
    };
    var nums = romanMap[s[s.length - 1]];
    for (var i = s.length - 2; i >= 0; i--) {
      if (romanMap[s[i]]! >= romanMap[s[i + 1]]!) {
        if (nums != null) {
          nums += romanMap[s[i]]!;
        }
      } else {
        if (nums != null) {
          nums -= romanMap[s[i]]!;
        }
      }
    }
    return nums!;
  }
}

int main() {
    vector<int> a = {1,1,2};
    Solution sol;
    cout << sol.romanToIntt(a) << endl;
    return 0;
}  