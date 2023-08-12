#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int a, b;
        cin >> a >> b;
        int diff = abs(a-b);
        int res = diff/10;
        if(diff%10 != 0)
            res++;
        cout << res << '\n';
    }

    return 0;
}
