#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if(a >= x){
            x = 0;
            a -= x;
        }
        else{
            x -= a;
            a = 0;
        }

        if(b >= y){
            y = 0;
            b -= y;
        }
        else{
            y -= b;
            b = 0;
        }


        if(x > 0){
            if(c >= x){
                c -= x;
                x = 0;
            }
            else{
                cout << "NO\n";
                continue;
            }
        }

        if(y > 0){
            if(c >= y){
                c -= y;
                y = 0;
                cout << "YES\n";
                continue;
            }
            else{
                cout << "NO\n";
                continue;
            }
        }

        cout << "YES\n";

    }

    return 0;
}
