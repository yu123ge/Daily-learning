#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long dp[1001][2];
    memset(dp, 0, sizeof(dp));
    dp[1][0] = 1;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % 1000000007;
        dp[i][1] = dp[i - 1][0] % 1000000007;
    }
    cout << (dp[n][0] + dp[n][1]) % 1000000007 << endl;
    return 0;
}
