#include <bits/stdc++.h>
using namespace std;

bool solver(string s){
    if(s.substr(0, 4) == "2020")
        return true;

    if(s.substr(s.length()-4, s.length()) == "2020")
        return true;

    if(s.substr(0,2) == "20" && s.substr(s.length()-2, 2) == "20")
        return true;

    if(s.front() == '2' && s.substr(s.length()-3, 3) == "020")
        return true;

    if(s.substr(0, 3) == "202" && s.back() == '0')
        return true;

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n;
        string s;
        cin >> n >> s;

        if(solver(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
