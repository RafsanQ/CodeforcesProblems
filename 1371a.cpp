#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n;
        cin >> n;
        int res = n/2;
        if(n%2 != 0)
            res++;
        cout << res << '\n';
    }

    return 0;
}
