#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int s = 0;
    int e = n - 1;
    int key;
    cin >> key;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] == key) {
            cout << mid;
            break;
        }
        else if(arr[mid] < key) s = mid + 1;
        else e = mid - 1; 
    }
    return 0;
}