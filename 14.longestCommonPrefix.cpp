/*

                                                      ^__^     
                                                    (oo)\_______
                                                    (__)\       )\/\
                                                        ||----w |
                                                        ||     ||

*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return {};
        sort(strs.begin(), strs.end());
        string ft = strs[0], lt = strs[strs.size()-1], an = "";
        int i = 0;
        while (i < ft.size() && ft[i] == lt[i]) {
            an += ft[i];
            i++;
        }
        return an;
    }        
};

int main() {
   vector<string> v = {"flower","flow","flight"};
   Solution sol;
   string an = sol.longestCommonPrefix(v);
   cout << an << endl;
  return 0;
}  
