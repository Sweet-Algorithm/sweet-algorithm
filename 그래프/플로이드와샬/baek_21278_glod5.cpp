#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
int N, M;
int A, B;
int dp[101][101];



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (i == j) dp[i][j] = 0;
            else dp[i][j] = 987654321;
        }
   }

    for (int i = 0; i < M; i++) {
        cin >> A >> B;
        dp[A][B] = 1;
        dp[B][A] = 1;
    }
    //여기까진 그림에 그려준거 그대로 구현.

    
    for (int k = 1; k <= N;k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    int ans = 987654321;
    int first;
    int second;
    for (int i = 1; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            int sum = 0;
            for (int k = 1; k <= N; k++) {
                sum += min(dp[i][k], dp[j][k]);
            }
            if (sum < ans) {
                ans = sum;
                first = i;
                second = j;
            }
        }
    }
    cout << first << ' ' << second << ' ' << ans * 2<<'\n';

    

    return 0;
}
