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
    while(t) {
        int n, k;
        cin >> n >> k;
        int mid;
        int x = (k / (n - 1));
        int rem = k - (n - 1) * x;
        if(rem) {
            cout << (rem + (n * x)) << endl;
        } else {
            cout << (n  * x - 1) << endl;
        }
        t--;
    }
    
    return 0;
}


// 3, 7 ----> 1, 2, 4, 5, 7, 8, 10
// 4 12 ----> 1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15