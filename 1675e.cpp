#include <bits/stdc++.h>
using namespace std;

string decreaseChar(string s, char c){
    for(int i=0; s[i]; i++){
        if(s[i] == c)
            s[i]--;
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int i=0;
        while(k > 0){
            if(s[i] > 'a'){
                k--;
                s = decreaseChar(s, s[i]);
            }
            else{
                i++;
                if(i >= n)
                    break;
            }
        }
        cout << s << '\n';
    }

    return 0;
}


