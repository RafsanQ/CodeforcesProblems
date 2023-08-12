#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int req = ceil((double)y/100 * n);
    if(x < req)
        cout << req-x << '\n';
    else
        cout << "0\n";
    return 0;
}
