#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i;
    cin >> n;
    int a[n], maxa = -1;
    for(i=0; i<n; i++){
        cin >> a[i];
        maxa = max(maxa, a[i]);
    }
    cin >> m;
    int b[m], maxb = -1;
    for(i=0; i<m; i++){
        cin >> b[i];
        maxb = max(maxb, b[i]);
    }
    cout << maxa << ' ' << maxb << '\n';


    return 0;
}
