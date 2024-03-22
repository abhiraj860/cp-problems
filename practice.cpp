#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sumStep;
        vector<int> maxStep;
        int maxM = 0;
        int sumTot = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sumTot += a;
            maxM = max(maxM, a);
            sumStep.push_back(sumTot);
            maxStep.push_back(maxM);
        }
        vector<int> res;
        for(int i = 0; i < k; i++) {
            int curr;
            cin >> curr;
            int indx = upper_bound(maxStep.begin(), maxStep.end(), curr) - maxStep.begin() - 1;
            int val = indx == -1 ? 0 : sumStep[indx]; 
            res.push_back(val);
        }
        for(auto x : res) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}