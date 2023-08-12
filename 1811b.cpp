#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        char d;
        string s, res;
        cin >> n >> d >> s;

        bool inserted = false;

        for(int i=0; i<n; i++){
            if(s[i] < d && !inserted){
                res.push_back(d);
                inserted = true;
            }
            res.push_back(s[i]);
        }

        if(!inserted){
            res.push_back(d);
        }

        cout << res << '\n';
    }

    return 0;
}

