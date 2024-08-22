#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <stack>

using namespace std;
int N;
int X[50001], Y[50001];
int cnt = 0;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int max_x = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    stack<int> s;

    for (int i = 0; i < N; i++) {
        while (!s.empty() && s.top() > Y[i]) {
            s.pop();
            cnt++;
        }
        if (s.empty() || s.top() < Y[i]) {
            s.push(Y[i]);
        }
    }

    
    while (!s.empty()) {
        if (s.top() > 0) {
            cnt++;
        }
        s.pop();
    }

    cout << cnt;
    
    
  

    

    return 0;
}
