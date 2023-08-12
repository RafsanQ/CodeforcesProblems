#include <bits/stdc++.h>
using namespace std;

int getDifference(string s1, string s2){
    int total = 0;
    for(int i=0; s1[i]; i++){
        total += abs(s1[i] - s2[i]);
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        string s[n];

        for(int i=0; i<n; i++){
            cin >> s[i];
        }

        int minDifferene = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                minDifferene = min(minDifferene, getDifference(s[i], s[j]));
            }
        }
        cout << minDifferene << '\n';
    }

    return 0;
}


