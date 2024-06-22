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
    int count = 0, sum = 0;
    unordered_map<int,int> m;
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    for(int i = 0; i < nums.size(); ++i) (nums[i] % 2 != 0)? nums[i] = 1 : nums[i] = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum == k) count++;
        if(m.find(sum-k) != m.end()) count+=m[sum-k];
        m[sum]++;
    }
    return count;
    }

};

int main() {

    vector<int> a = {1,1,2,1,1};
    Solution sol;
    cout << sol.numberOfSubarrays(a, 3) << endl;

  return 0;
}  
