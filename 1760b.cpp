#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int maxLetter = 0;
        for(int i=0; s[i]; i++){
            maxLetter = max(maxLetter, s[i]-'a'+1);
        }
        cout << maxLetter << '\n';
    }

    return 0;
}

