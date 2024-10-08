#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int N;
int arr[10001] = { 0 };
int dp[10001] = { 0 };


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    for (int i = 3; i <= N; i++) {
        dp[i] = max({ dp[i - 3] + arr[i - 1] + arr[i],dp[i - 2] + arr[i],dp[i - 1] });
    }
    cout << dp[N];

    return 0;
}
