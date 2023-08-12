#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b+c)%9 != 0 || min(min(a,b),c) < (a+b+c)/9)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
