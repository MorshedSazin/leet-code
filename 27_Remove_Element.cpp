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
    unordered_map<int, int> m;
public:
    int removeElement(vector<int>& nums, int val) {
        for (int num : nums) m[num]++;
        nums.clear();
        
        for (auto& pair : m) {
            if (pair.first != val) {
                for (int i = 0; i < pair.second; ++i) {
                    nums.push_back(pair.first);
                }
            }
        }

        return nums.size();
    }
};

int main() {

    vector<int> a = {1,1,2,3,4};
    Solution sol;
    cout << sol.removeElement(a,3) << endl;

  return 0;
}  
