#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int x;
        cin >> x;
        if(x%7 == 0)
            cout << x/7 << '\n';
        else
            cout << x/7+1 << '\n';
    }

    return 0;
}
