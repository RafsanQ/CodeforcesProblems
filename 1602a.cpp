#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        string s;
        cin >> s;
        char toRemoveLetter = '{';
        for(int i=0; s[i]; i++){
            if(s[i] < toRemoveLetter)
                toRemoveLetter = s[i];
        }
        string a, b;
        a.push_back(toRemoveLetter);
        bool alreadyRemoved = false;
        for(int i=0; s[i]; i++){
            if(alreadyRemoved){
                b.push_back(s[i]);
                continue;
            }

            if(s[i] == toRemoveLetter){
                alreadyRemoved = true;
                continue;
            }

            b.push_back(s[i]);
        }
        cout << a << ' ' << b << '\n';
    }

    return 0;
}
