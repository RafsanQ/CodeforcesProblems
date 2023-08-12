#include <bits/stdc++.h>
using namespace std;

void createLPS(string pat, int lps[]){
    int templen = 0, m = pat.length();
    lps[0] = 0;
    int i = 1;
    while(i < m){
        if(pat[i] == pat[templen]){
            templen++;
            lps[i] = templen;
            i++;
        }
        else{
            if(templen != 0)
                templen = lps[templen - 1];
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, i;
    string t, s;
    cin >> n >> k >> t;
    int lps_t[t.length()];
    createLPS(t, lps_t);
    if(lps_t[t.length()-1] == 0){
        for(i=0; i<k; i++){
            cout << t;
        }
    }
    else{
        for(i=t.length()-1; i>=0; i--){
            if(lps_t[i] == 0)
                break;
        }
        int temp = i+1;
        string toUse = t.substr(0, temp);
        for(i=0; i<k; i++){
            cout << toUse;
        }
        cout << t.substr(temp, t.length()-temp);
    }
    cout << '\n';

    return 0;
}

