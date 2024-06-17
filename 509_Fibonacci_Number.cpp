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
    int fib(int n) {
        return (n == 0) ? 0 : (n <= 2) ?  1 : fib(n-1) + fib(n-2);
    }
};

int main() {
    int n; cin >> n;
   Solution sol;
   int an = sol.fib(n);
   cout << an << endl;
  return 0;
}  
