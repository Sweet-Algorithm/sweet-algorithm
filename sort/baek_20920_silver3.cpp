#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <map>

using namespace std;
int N, M;
string str;
map<string, int>m;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str.size() >= M)m[str]++;
    }

    vector<pair<string, int>> new_arr(m.begin(), m.end());
    sort(new_arr.begin(), new_arr.end(), [](pair<string, int> const& l, pair<string, int> const& r){
        if (l.second != r.second)
            return l.second > r.second;
        else if (l.first.length() != r.first.length())
            return l.first.length() > r.first.length();
        else
            return l.first < r.first;


        });

    for (auto& k : new_arr) cout << k.first << '\n';
    


    return 0;
}
