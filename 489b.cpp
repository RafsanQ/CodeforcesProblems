#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j, cnt = 0;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    cin >> m;
    int b[m];
    for(i=0; i<m; i++)
        cin >> b[i];
    sort(b, b+m);

    for(i=0, j=0; i<n && j<m; i++){
        for( ; j<m; j++){
            if(abs(a[i]-b[j]) < 2){
                cnt++;
                j++;
                break;
            }
            else if(a[i] < b[j]){
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
