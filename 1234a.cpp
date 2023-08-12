#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> q;
    for(t=0; t<q; t++){
        int n, i, sum = 0;
        cin >> n;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            sum += input;
        }
        for(i=1; ; i++){
            if(i*n >= sum)
                break;
        }
        cout << i << '\n';
    }

    return 0;
}
