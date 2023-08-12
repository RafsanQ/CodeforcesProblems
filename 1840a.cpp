#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s, a;
        cin >> n >> s;

        for(int i=0; i<n; i++){
            char current = s[i];
            a.push_back(current);
            for(++i ; i<n && s[i] != current; i++){}
        }
        cout << a << '\n';
    }

    return 0;
}

