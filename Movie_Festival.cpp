#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<vector<int>> timings(n, vector<int>(2,0));

    for(int i=0; i<n; i++){
        cin>>timings[i][1]>>timings[i][0];
    }

    sort(timings.begin(), timings.end());

    int count = 0;
    int end = 0;
    for(auto i: timings){
        if(i[1] >= end){
            ++count;
            end = i[0];
        }
    }

    cout << count;


    return 0;
}