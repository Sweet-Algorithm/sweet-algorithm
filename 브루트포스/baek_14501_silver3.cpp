#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
int N;
int T[16];
int P[16];
int dp[16];
int cost = 0;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    fill(dp, dp + N + 1, 0);
    for (int i = 0; i < N; i++) {
        cin >> T[i] >> P[i];
    }

    
    for (int i = 0; i <= N; i++) {
        dp[i] = max(cost, dp[i]);
        if (T[i] + i <= N) {
            dp[T[i] + i] = max(dp[T[i] + i], P[i] + dp[i]);
        }
        cost = max(cost, dp[i]);

    }
    cout << cost;
    

    return 0;
}
