#include <bits/stdc++.h>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i, j, prefix = 0;
        cin >> n;
        int a[n];
        priority_queue <int, vector<int>, greater<int>> d;
        for(i=0; i<n; i++){
            cin >> a[i];
            d.push(a[i]);
        }

        for(i=0, j=n-1; i<n && j>=0 && i<j; ){
            int toFind = d.top();
            d.pop();
            if(toFind == a[i]){
                i++;
                continue;
            }
            else if(toFind == a[j]){
                j--;
                continue;
            }
            int tempi, tempj;
            for(tempi=i; tempi<=j; tempi++){
                if(a[tempi] == toFind)
                    break;
            }
            for(tempj=j; tempj>=i; tempj--){
                if(a[tempj] == toFind)
                    break;
            }
            if(j-tempj >= tempi-i){
                i = tempi;
                prefix = max(i,prefix);
            }
            else{
                j = tempj;
                prefix = max(prefix,j-1);
            }
            cout << "i=" << i << " j=" << j << " prefix=" << prefix << '\n';
        }
        cout << prefix << '\n';
    }

    return 0;
}

