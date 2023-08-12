#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i;
    cin >> n >> m;
    int a[n], input;
    for(i=0; i<n; i++)
        cin >> a[i];

    for(i=0; i<m; i++){
        int j, cnt = 0;
        map <int, bool> isPres;
        cin >> input;
        for(j=input-1; j<n; j++)
            if(!isPres[a[j]]){
                cnt++;
                isPres[a[j]] = true;
            }
        cout << cnt << endl;
        isPres.clear();
    }

    return 0;
}
