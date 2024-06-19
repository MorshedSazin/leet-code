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
    vector<int> productExceptSelf(vector<int>& nums) {
        
       vector<int> px(nums.size(), 1);
       vector<int> sx(nums.size(), 1);
        
        for (int i = 1, j = nums.size() - 2; i < nums.size() ? true: j>=0; ++i, --j) {
            px[i] = px[i-1] * nums[i-1];
            sx[j] = sx[j + 1] * nums[j + 1];
        }
    
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] = px[i] * sx[i];
        }        
        return nums;
    }
};

int main() {

    vector<int> a = {-1,1,0,-3,3};
    Solution sol;
    vector<int>b = sol.productExceptSelf(a);
    for(int i = 0; i <b.size(); ++i ) cout <<b[i] <<" ";
    cout << endl;

  return 0;
}  
