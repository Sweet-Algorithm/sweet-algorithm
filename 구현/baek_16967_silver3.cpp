#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
int H, W;
int X, Y;
int arr[601][601] = { 0 };



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> H >> W >> X >> Y;

    for (int i = 0; i < H + X; i++) {
        for (int j = 0; j < W + Y; j++) {
            cin >> arr[i][j];
        }
   }
    
    for (int i = X; i < H; i++) {
        for (int j = Y; j < W; j++) {
            arr[i][j] -= arr[i - X][j - Y];
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    
  

    

    return 0;
}
