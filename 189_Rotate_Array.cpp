#include<bits/stdc++.h>
using namespace std;

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
    vector<int> array = {7,1,5,3,6,4}; 
    Solution solution;
    cout << solution.maxProfit(array) << endl;

    return 0;
}
