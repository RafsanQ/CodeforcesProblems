#include <bits/stdc++.h>
using namespace std;
int main(){
    int64_t x, y, z;
    cin >> x >> y >> z;
    int64_t tot = x+y;
    int64_t coconuts = tot/z;
    cout << coconuts << ' ';

    if(x/z + y/z == coconuts)
        cout << "0\n";
    else
        cout << min(z-x%z, z-y%z) << '\n';
    return 0;
}
