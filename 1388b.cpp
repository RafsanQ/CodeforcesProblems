#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int howMany = ceil((double)n/4);
        string res(n,'9');
        for(i=n-1; howMany; i--){
            res[i] = '8';
            howMany--;
        }
        cout << res << '\n';
    }

    return 0;
}
