#include<bits/stdc++.h>
using namespace std;
// #define int long long



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,q;
    cin >> n >> q;

    vector<vector<char>> v1(n+1, vector<char>(n+1,'.'));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> v1[i][j];
        }
    }

    

    vector<vector<int>> prefix(n+1, vector<int>(n+1,0));

    for(int i=1; i<=n; i++){
         for(int j=1; j<=n; j++){
             prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + (v1[i][j] == '*');
         }
     }


    for(int i=1; i<=q; i++){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        int ans = prefix[y2][x2] - prefix[y2][x1-1] - prefix[y1-1][x2] + prefix[y1-1][x1-1];

        cout << ans << '\n';
    }


    

    return 0;
}