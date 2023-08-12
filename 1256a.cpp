#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        int y = S%n;
        int x = S/n;

        if(x <= a && y <=b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
