#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n, greater<>());

        for(int i=1; i<n; i++){
            a[i] += a[i-1];
        }

        for(int i=0; i<q; i++){
            int query;
            cin >> query;

            int res = lower_bound(a, a+n, query)-a;

            if(res == n)
                cout << "-1\n";
            else
                cout << res+1 << '\n';
        }

    }

    return 0;
}




