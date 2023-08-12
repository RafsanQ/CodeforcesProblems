#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        if(a[0] + a[1] <= a[n-1])
            printf("%d %d %d\n", 1, 2, n);
        else
            printf("-1\n");
    }

    return 0;
}
