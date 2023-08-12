#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i, endingBrac = 0;
        string s;
        cin >> n >> s;
        for(i=n-1; i>=0; i--){
            if(s[i] == ')')
                endingBrac++;
            else
                break;
        }
        i++;
        if(i < endingBrac)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
