#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
int N1,N2;
int T;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N1>> N2;

    string N1_str, N2_str;
    cin >> N1_str >> N2_str;

    cin >> T;

    reverse(N1_str.begin(), N1_str.end());


    string N_sum = N1_str + N2_str;


    for (int i = 0; i < T; ++i) {
        vector<int> temp;

        
        for (int j = 1; j < N_sum.size(); ++j) {
            
            if (N2_str.find(N_sum[j]) != string::npos && N1_str.find(N_sum[j - 1]) != string::npos) {
                temp.push_back(j);
            }
        }

        
        for (int k : temp) {
            swap(N_sum[k], N_sum[k - 1]);
        }
    }


    cout << N_sum << "\n";

    

    return 0;
}
