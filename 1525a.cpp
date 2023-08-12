#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;

        if(100%k == 0){
            cout << 100/k << '\n';
        }
        else{
            int gcd = __gcd(100,k);
            cout << 100/gcd << '\n';
        }
    }
    return 0;
}


