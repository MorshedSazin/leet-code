#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i){
            if(i==0 || prices[i-1]<prices[i]) {
              maxProfit += (prices[i] - prices[i-1]);  
            } 
        }
        return maxProfit;
    }
};

int main() {
    vector<int> array = {7,1,5,3,6,4};
    Solution solution;
    cout<<solution.maxProfit(array)<<endl;;

    return 0;
}


//1,2,3,4,5
//buyingPrice = prices[0]