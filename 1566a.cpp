#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int64_t n, s;
        cin >> n >> s;

        int64_t remaining = n/2 + 1;

        cout << s/remaining << '\n';

    }

    return 0;
}
