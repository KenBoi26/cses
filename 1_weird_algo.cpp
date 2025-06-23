#include<bits/stdc++.h>
using namespace std;
#define int long long
// using ll = long long;
// double getCurrentTime(){
// return (double)(clock() - startTime) / CLOCKS_PER_SEC;}

signed main(){
    int n;
    cin >> n;
    cout << n << " ";
    while(n!=1){
        
        if(n % 2 == 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
        cout << n << " ";
    }
}
