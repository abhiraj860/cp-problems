#include<bits/stdc++.h>
#define int long long int
using namespace std;

int nums[1000000];
int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            while((a % 2) == 0) {
                cnt++;
                a /= 2;
            }
            int k = i;
            int cnt1 = 0;
            nums[i] = 0;
            while((k % 2) == 0) {
                cnt1++;
                k = k / 2;
            }
            nums[i] = cnt1;
            if(cnt >= n) {
                cout << 0 << endl; 
                break;
            } 
        }
        if(cnt < n) {
            sort(nums + 1, nums + n + 1);
            int p = 0;
            for(int i = n; i >= 1; i--) {
                cnt += nums[i];
                p++;
                if(cnt >= n) {
                    cout << p << endl; 
                    break;
                } 
            }
        }
        if(cnt < n) cout << -1 << endl;
    }

    return 0;
}
