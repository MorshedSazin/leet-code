#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0) return false;
    long revNum = 0, x2 = x;
    while (x != 0) {
        revNum = (revNum * 10) + (x % 10);
        x /= 10;
    }
    return (revNum == x2) ? true: false;
}

int main() {
    int x = -121;
    // cin >> x;
    cout  << isPalindrome(x) << endl;
}

//9.Palindrome_number.cpp