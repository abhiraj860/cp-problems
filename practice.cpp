#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool getSolve(vector<vector<int>> & vec, int i, int j, int n) {
    int row = i;
    int col = j;
    while(row >= 0) {
        if(vec[row][col] == 1) return false;
        row--;
    }
    row = i;
    col = j;
    while(row >= 0 && col >= 0) {
        if(vec[row][col] == 1) return false;
        row--;
        col--; 
    }
    row = i;
    col = j;
    while(row >= 0 && col < n) {
        if(vec[row][col] == 1) return false;
        row--;
        col++; 
    }
    return true;
}

void solve(vector<vector<int>> & grid, int i, int j, int n) {
    if(i >= n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    
    if(j >= n) solve(grid, i + 1, 0, n);

    for(int k = 0; k < n; k++) {
        bool getRes = getSolve(grid, i, k, n);
        if(getRes) {
            grid[i][k] = 1;
            solve(grid, i + 1, 0, n);
        } 
        grid[i][k] = 0;
    }
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<vector<int>>grid(n, vector<int>(n, 0));
    solve(grid, 0, 0, n);
    return 0;
}