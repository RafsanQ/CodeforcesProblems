#include <bits/stdc++.h>
using namespace std;

string randomString(int length){
    string str("abcdefghijklmnopqrstuvwxyz");
    random_device rd;
    mt19937 generator(rd());
    shuffle(str.begin(), str.end(), generator);
    return str.substr(0, length);
}

string incrementString(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'z')
            s[i] = 'a';
        else
            s[i]++;
    }
    return s;
}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int a[n], mx = 0;
        for(i=0; i<n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        string s;
        if(mx == 0){
            s = randomString(10);
            cout << s << '\n';
        }
        else
            s = randomString(mx);
        for(i=0; i<n; i++){
            if(a[i] == 0){
                s = incrementString(s);
                cout << s << '\n';
                continue;
            }
            if(a[i] == mx)
                cout << s.substr(0, a[i]) << '\n';
            cout << s.substr(0, a[i]) << '\n';
        }
    }

    return 0;
}
