#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <stack>

using namespace std;
int P;
int T;
int arr[21];
int cnt = 0;
int k = 0;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> P;
    while (P--) {
        cin >> T;
        for (int i = 0; i < 20; i++) {
            cin >> arr[i];
        }
        for (int i = 19; i >0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[j + 1]) {
                    k = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = k;
                    cnt++;
                }
                else continue;
            }
        }
        cout << T << ' ';
        cout << cnt << '\n';
        cnt = 0;
    }
 

    

    return 0;
}
