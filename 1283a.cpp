#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i, h, m;
    cin >> t;
    for(i=0; i<t; ++i){
        cin >> h >> m;
        h = 23 - h;
        m = 60 - m;
        cout << h*60 + m << "\n";
    }
    return 0;
}
