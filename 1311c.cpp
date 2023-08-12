#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(i=0; i<t; i++){
        long int n, m, j, let[26] = {0};
        string s;
        cin >> n >> m >> s;
        int p[m];
        for(j=0; j<m; j++)
            cin >> p[j];
        long int k = 0;
        for(j=0; s[j]; j++){
            let[s[j]-'a']++;
            if(j == p[k]-1){
                k++;
                j = -1;
            }
        }
        for(j=0; j<26; j++)
            cout << let[j] << " ";
        cout << "\n";
    }
    return 0;
}

