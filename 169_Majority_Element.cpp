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
    int majorityElement(vector<int>& nums) {
      for(int i = 0; i < nums.size(); ++i) {
      int count = 0;
        for (int j = 0; j < nums.size(); j++) {
          if(nums[i] == nums[j]) count++;
        }
        if(count > nums.size()/2)return nums[i];
      }
      return 0;
    }
};

int main() {

  vector<int> a = {3,2,3};
  Solution sol;
  cout << sol.majorityElement(a) << endl;
  return 0;
}  
