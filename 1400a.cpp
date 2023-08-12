#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        cout << "next\n";
        int n, i;
        string s;
        cin >> n >> s;
        cout << s.substr(0, n) << '\n';
    }
    return 0;
}
