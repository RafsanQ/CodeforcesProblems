#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int64_t a_actual, b_actual, x, y, n_actual, i, j;
        cin >> a_actual >> b_actual >> x >> y >> n_actual;

        int64_t a = a_actual, b = b_actual, n = n_actual;

        if(a-n >= x){
            a -= n;
            n = 0;
        }
        else{
            n -= a-x;
            a = x;
        }

        if(b-n >= y){
            b -= n;
            n = 0;
        }
        else{
            n -= b-y;
            b = y;
        }
        int64_t res1 = a*b;

        a = a_actual;
        b = b_actual;
        n = n_actual;

        if(b-n >= y){
            b -= n;
            n = 0;
        }
        else{
            n -= b-y;
            b = y;
        }

        if(a-n >= x){
            a -= n;
            n = 0;
        }
        else{
            n -= a-x;
            a = x;
        }

        int64_t res2 = a*b;

        cout << min(res1, res2) << '\n';
    }

    return 0;
}
