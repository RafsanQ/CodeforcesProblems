#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, x, i;
        cin >> n >> x;
        int a[n], b[n];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);

        bool res = true;
        for(i=0; i<n; i++){
            if(a[i] + b[i] > x){
                res = false;
                break;
            }
        }

        if(res)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
