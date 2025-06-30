#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<int,int> customers;
    int a,b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        customers[a] += 1;
        customers[b] -= 1;
    }

    int ans = 0, curr = 0;
    for(auto it : customers){
        curr += it.second;
        ans = max(ans, curr);
    }

    cout << ans;


    


    return 0;
}