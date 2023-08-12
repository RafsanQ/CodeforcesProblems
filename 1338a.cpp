#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n;
        cin >> n;
        if(n <= 30)
            cout << "NO\n";
        else{
            if(n-30 == 6)
                cout << "YES\n" << "5 6 10 15\n";
            else if(n-30 == 10)
                cout << "YES\n" << "5 6 14 15\n";
            else if(n-30 == 14)
                cout << "YES\n" << "9 6 14 15\n";
            else
                cout << "YES\n" << "14 10 6 " << n-30 << '\n';
        }
    }

    return 0;
}
