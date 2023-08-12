#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        bool res = true;
        for(i=0; i<n-1; i++){
            if(a[i+1]-a[i] > 1){
                res= false;
                break;
            }
        }
        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
