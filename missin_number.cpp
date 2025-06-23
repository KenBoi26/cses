#include<bits/stdc++.h>
using namespace std;
#define in t long long


signed main(){

    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for(int i = 1; i <= n; i++){
        if(v[i-1] != i){
            cout << i << endl;
            return 0;
        }
    }

}