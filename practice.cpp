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
        int s = 1;
        int e = 5e9 + 2;
        int ans = 0;
        while(s <= e) {
            int mid = s + (e - s) / 2;
            int cnt = mid - (mid / n);
            if(cnt == k) {
                ans = mid;
                e = mid - 1;
            } else if (cnt < k) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        t--;
        cout << ans << endl;
    }
    
    return 0;
}


// 3, 7 ----> 1, 2, 4, 5, 7, 8, 10
// 4 12 ----> 1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15