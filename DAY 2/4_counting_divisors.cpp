#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--){
        int num;
        cin >> num;
        int count = 0;

        for(int i=1; i*i<=num; i++){
            if(num%i == 0){
                int a = i, b = num/i;
                count++;
                if(a != b){
                    count++;
                }
            }
        }

        cout << count << ' ';


        
    }

    return 0;
}