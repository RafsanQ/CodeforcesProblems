#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int64_t a, b, k;
        cin >> a >> b >> k;

        int64_t netDisplacement = a-b;

        int64_t totalDistance = netDisplacement*(k/2);

        if(k%2 != 0){
            totalDistance += a;
        }

        cout << totalDistance << '\n';
    }

    return 0;
}
