#include<bits/stdc++.h>
using namespace std;
#define int long long



int binpow(int a, int b, int MOD=1e9 + 7){
    int ans = 1;
    while(b>0){
        if(b%2 == 1){
            ans = (ans%MOD * a%MOD) % MOD;
        }

        a = (a%MOD * a%MOD) % MOD;
        b >>= 1LL;

    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc;
    cin >> tc;

    while(tc--){
        int a, b, c;
        cin >> a >> b >> c;
        int temp = binpow(b,c, 1e9 + 6);
        cout << binpow(a, temp) << endl;
    }

    return 0;
}