#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n, a[3], x, y, mx = 0;
    cin >> n;
    for(i=0; i<3; ++i)
        cin >> a[i];
    sort(a, a+3);
    for(x=0; a[0]*x<n; x++){
        for(y=0; a[1]*y<n; y++){
            if(a[0]*x + a[1]*y == n){
                mx = max(mx, x+y);
                cout << "(1) x=" << x << " y=" << y << endl << "mx=" << mx << endl;
            }
            else if( ((n - (a[0]*x + a[1]*y)) % a[2]) == 0){
                mx = max(mx, x + y + (n - (a[0]*x + a[1]*y))/a[2]);
                cout << "(2) x=" << x << " y=" << y << " z=" <<  (n - (a[0]*x + a[1]*y))/a[2] << endl << "mx=" << mx << endl;
            }
        }
    }

    cout << mx << endl;

    return 0;
}
