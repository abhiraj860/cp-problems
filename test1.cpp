#include<bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        int x,sum=0,ss=0;
    for(int i=1;i<=n;i++){
        cin>>x;
    while(x%2==0){x=x/2;sum++;}
        int j=i;
        int cnt = 0;
    while(j%2==0){j=j/2;cnt++;}
        v.push_back(cnt);
    if(sum >= n) {
        cout << 0 << endl;
        break;
    }
    }
    if(sum < n) {
        sort(v.begin(), v.end());
        for(int i = n - 1; i >= 0; i--){
            sum+=v[i];
            if(v[i] > 0) ss++;
            if(sum >= n) {
                cout << ss << endl;
                break;  
            } 
        }
    } 
    if(sum < n) cout << -1 << endl;
    // if(sum >= n) cout << ss << endl;
    }
    return 0;
}