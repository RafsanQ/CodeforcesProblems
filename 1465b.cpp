#include <bits/stdc++.h>
using namespace std;

bool isValid(int64_t n){
    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        if(s[i] != '0'){
            if(n%(s[i]-'0') != 0)
                return false;
        }
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int64_t n, i;
        cin >> n;
        for(i=n; ; i++){
            if(isValid(i))
                break;
        }
        cout << i << '\n';
    }

    return 0;
}
