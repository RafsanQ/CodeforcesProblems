#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
//    auto start = chrono::high_resolution_clock::now();
    for(q=0; q<t; q++){
        int n, k, i;
        cin >> n >> k;
        if(n <= k){
            cout << "1\n";
            continue;
        }
        int res = n;
        for(i=1; i<=sqrt(n) && i<=k; i++){
            if(n%i == 0){
                if(i <= k)
                    res = min(res, n/i);
                if(n/i <= k)
                    res = min(res, i);
            }
//            cout << "i=" << i << " res=" << res << '\n';
        }
        cout << res << '\n';
    }
//    auto stop = chrono::high_resolution_clock::now();
//    auto dur= stop - start;
//    cout << "\nTime=" << chrono::duration<double,milli>(dur).count() << '\n';

    return 0;
}
