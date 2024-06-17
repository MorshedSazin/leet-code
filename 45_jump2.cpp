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
    int jump(vector<int>& nums) {
        int j = 0, i = 0, k=0;
        
        while(i < nums.size()-1) {
            int y = 0;
            for(int x = j; x <= i; x++) {
                y = max(y, nums[x]+x);
            }
            j = i + 1;
            i = y;
            k++;
        }
        return k;
    }
};

//3,2,1,3,0,1,2,1,2
//{2,3,1,1,4};

int main() {
   vector<int> v = {2,3,1,1,4}; 
   Solution sol;
   int an = sol.jump(v);
   cout << an << endl;
  return 0;
}  
