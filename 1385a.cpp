#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int x[3];
        cin >> x[0] >> x[1] >> x[2];
        sort(x, x+3);
        if(x[1] != x[2])
            cout << "NO\n";
        else
            cout << "YES\n" << x[0] << ' ' << x[0] << ' ' << x[2] << '\n';
    }

    return 0;
}
