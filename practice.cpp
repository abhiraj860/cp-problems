#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool binaryDec(int i) {
    string str = to_string(i);
    bool flag = true;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] > '1' && str[i] <= '9') {
            flag = false;
            break;
        }
    }
    // cout << str << "----" << flag << endl;
    return flag;
}

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
        while(n % 10 == 0) {
            n = n / 10;
        }
        if(binaryDec(n)) {
            cout << "YES" << endl;
            continue;
        }
        for(int i = 3; i <= n; i += 2) {
            if(binaryDec(i) && ((n % i) == 0)) {
                while(n > 0 && (n % i == 0)) {
                    n = n / i;
                }
            }
        }
        if(binaryDec(n)) cout << "YES" << endl;
        else cout << "NO" << endl;  
    }   

    return 0;
}