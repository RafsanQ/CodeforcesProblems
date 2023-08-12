#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        int maxRow = max(n-r, r-1);
        int maxCol = max(m-c, c-1);
        cout << maxRow + maxCol << '\n';
    }

    return 0;
}
