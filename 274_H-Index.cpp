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
    int hIndex(vector<int>& citations) {
        int n = citations.size(), count = 0;
        vector<int> arr(n+1, 0);

        sort(citations.begin(), citations.end(), greater<int>()); 

        for (auto citation : citations) {
            (citation >= n) ? arr[n]++ : arr[citation]++; 
        }

        for (int i = n; i >= 0; --i) {
            count += arr[i];
            if (count >= i) {
                return i;
            }
        }
        return 0;
    }
};



int main() {

    vector<int> vec = {100};
    Solution sl;
    cout << sl.hIndex(vec) << endl;

}  
