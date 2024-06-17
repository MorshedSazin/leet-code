#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                nums[k++] = nums[i];
            }
        }
        return k;
        
    }
    
};

int main(){
    vector<int> array = {0,0,1,1,1,2,2,3,3,4}; 
    Solution solution;
    int size = solution.removeDuplicates(array);
    cout<<size<<endl;
    
return 0;
}