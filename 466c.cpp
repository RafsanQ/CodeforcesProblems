#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int a[n], prefixSum[n] = {0};

    for(i=0; i<n; i++){
        cin >> a[i];
        if(i != 0)
            prefixSum[i] = a[i] + prefixSum[i-1];
        else
            prefixSum[i] = a[i];
    }

    if(prefixSum[n-1]%3 != 0){
        cout << "0\n";
        return 0;
    }

    for(i=0; i<n; i++){
        cout << prefixSum[i] << ' ';
    }
    cout << '\n';
    int reqSum = prefixSum[n-1]/3, cnt = 0;

    for(i=lower_bound(prefixSum, prefixSum+n, reqSum)-prefixSum; i<n && prefixSum[i] == reqSum; i++){
        if(i < n-2){
            int toFind = prefixSum[i] + reqSum;
            cout << "i=" << i  << " toFind=" << toFind << '\n';
            for(int j=lower_bound(prefixSum+i, prefixSum+n, toFind)-prefixSum; j<n; j++){
                cout << "Found at " << j << '\n';
                if(prefixSum[j] - prefixSum[i] == reqSum && j < n-1){
                    cout << "add\n";
                    cnt++;
                }
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}
