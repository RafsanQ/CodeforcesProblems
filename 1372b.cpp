#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> q;
    for(t=0; t<q; t++){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << n/2 << ' ' << n/2 << '\n';
            continue;
        }
        int i, res = 1;
        for(i=1; i*i<=n; i++){
            if(n%i == 0){
                res = max(res, i);
            }
        }
        cout << res << ' ' << n-res << '\n';
    }

    return 0;
}


