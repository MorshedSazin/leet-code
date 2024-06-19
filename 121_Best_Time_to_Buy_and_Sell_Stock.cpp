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
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, buyingPrice = prices[0];
        for (int i = 0; i < prices.size(); ++i) {
            if(prices[i]<buyingPrice) {
                buyingPrice = prices[i];
            }else{
                int currentP = prices[i] - buyingPrice;
                (currentP>maxProfit) ? maxProfit=currentP:0;
            }  
        }
        return maxProfit;
    }
};
int main() {

    vector<int> a = {7,6,4,3,1};
    Solution sol;
    cout << sol.maxProfit(a) << endl;

  return 0;
}  