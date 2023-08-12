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
        for(i=1; i<n; i++){
            a[i] = i;
        }
        a[0] = n;
        for(i=0; i<n; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
