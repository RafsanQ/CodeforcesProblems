#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int xa, xb, ya, yb, xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        int res = 0;
        if(xa == xb && xa == xf && ((yf > ya && yf < yb) || (yf > yb && yf <ya))){
            res += 2;
        }
        else if(ya == yb && ya == yf && ((xf > xa && xf < xb) || (xf > xb && xf <xa))){
            res += 2;
        }

        res += abs(xa-xb) + abs(ya-yb);
        cout << res << '\n';
    }

    return 0;
}
