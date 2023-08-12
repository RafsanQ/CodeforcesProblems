#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int a[n];
        int minVal = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            minVal = min(minVal, a[i]);
        }

        int toEat = 0;
        for(int i=0; i<n; i++){
            toEat += (a[i] - minVal);
        }

        cout << toEat << '\n';
    }

    return 0;
}

