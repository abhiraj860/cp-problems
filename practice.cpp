#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int inputs;
    cin >> inputs;
    vector<pair<int, int>> adjMat[inputs + 1];
    for(int i = 0; i < inputs; i++) {
        int p, q, wt;
        cin >> p >> q >> wt;
        adjMat[p].push_back({q, wt});
    }

    for(int i = 1; i <= inputs; i++) {
        cout << i << "--->";
        for(auto x : adjMat[i]) {
            cout << "(" << x.first << "," << x.second << ")";
        }    
        cout << endl;
    }
}