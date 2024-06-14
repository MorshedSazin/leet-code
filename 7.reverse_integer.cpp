#include <bits/stdc++.h>
using namespace std;

int bb(int &x) {
    long revNum = 0;
    while (x != 0) {
        revNum = (revNum * 10) + (x % 10);
        x /= 10;
    }
    if (revNum > INT_MAX || revNum < INT_MIN) return 0;
    return revNum;
}

// 1534236469  7.reverse_integer.cpp max = 2147483647, min = -2147483648, test = -2143847412 -2147483412
int main() {
    int x = 214748364;
    // cin >> x;
    cout << bb(x) << endl;
}
