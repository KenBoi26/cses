#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> prefix(n+1, 0);
    int sm = 0;

    for(int i=1; i<=n; i++){
        cin >> prefix[i];
        sm += prefix[i];
        prefix[i] = sm;
    }

    while(q--){
        int l, r;
        cin >> l >> r;

        int mn = INT_MAX;
        for(int i=l; i<r; r++){
            mn = min(mn,prefix[r] - prefix[i-1]);
        }

        cout << mn << '\n';
    }


    return 0;
}