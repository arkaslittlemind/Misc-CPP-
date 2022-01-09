#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
// 0 1 1 2 3 5 8 (Fibonacci Series)

int dp[N];
// Top Down Approach

// returns nth Fibonacci Number
int fib_func(int n) {

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];

    return dp[n] = fib_func(n - 1) + fib_func(n - 2) ;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    // Bottom Up Approach
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << fib_func(n);

}
