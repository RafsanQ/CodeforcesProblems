#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(i=0; i<t; i++){
        int n, m, j, input;
        cin >> n >> m;
        int a[n];
        bool ender = false;
        map <int, bool> p;
        for(j=0; j<n; j++)
            cin >> a[j];
        for(j=0; j<m; j++){
            cin >> input;
            p[input] = true;
        }
        for(j=0; j<n; j++){
            if(a[j] > a[j+1] && j < n-1){
                if(p[j+1]){
                    swap(a[j], a[j+1]);
                    j = -1;
                }
                else
                    break;
            }
            if(j == n-1){
                ender = true;
            }
        }
        if(ender)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
