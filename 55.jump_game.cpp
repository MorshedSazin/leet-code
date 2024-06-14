#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        while(true){
            if(nums[i] == 0){
                return false;
            }else if(nums[i] < nums.size()){
                i +=  nums[i];
                if(i == nums.size()-1) return true;
            }else{
                return false;
            }
        }
        return false;
    }
};

int main(){
    vector<int> array = {2,3,1,1,4}; 
    Solution solution;
    cout << solution.canJump(array) <<endl;
return 0;
}