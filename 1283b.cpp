#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i, n, k;
    cin >> t;
    for(i=0; i<t; ++i){
        cin >> n >> k;
        if(n%k == 0)
            cout << n << "\n";
        else{
            int j = n - n%k, mx = k/2;
            if(mx > n%k)
                mx = n%k;
            cout << j + mx << "\n";
        }
    }
    return 0;
}
