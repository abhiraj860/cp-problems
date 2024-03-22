#include<bits/stdc++.h>
#define int long long int
using namespace std;


void merge(vector<int> & vec, int s, int mid, int e) {
    int i = s;
    int j = mid + 1;
    vector<int> temp;
    while(i <= mid && j <= e) {
        if(vec[i] <= vec[j]) {
            temp.push_back(vec[i]);
            i++;
        } else {
            temp.push_back(vec[j]);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(vec[i]);
        i++;
    }
    while(j <= e) {
        temp.push_back(vec[j]);
        j++;
    }
    int m = 0;
    for(int l = s; l <= e; l++) {
        vec[l] = temp[m];
        m++;
    }
    return;
}

void mergeSort(vector<int> & vec, int s, int e) {
    if(s >= e) return;
    int mid = s + (e - s) / 2;
    mergeSort(vec, s, mid);
    mergeSort(vec, mid + 1, e);
    merge(vec, s, mid, e);
    return; 
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {9, 4, 3, 2, 1, 5, 6, 7, 8, 14, 12, 11, 10, 9, 9, 8};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for(auto x : arr) cout << x << endl; 

    return 0;
}