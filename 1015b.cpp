#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j;
    string s, t;
    vector <int> moves;
    cin >> n >> s >> t;
    for(i=0; i<n; ){
        if(s[i] != t[i]){
            for(j=i+1; j<n; j++){
                if(s[j] == t[i]){
                    moves.push_back(j);
                    swap(s[j], s[j-1]);
                    break;
                }
                if(j == n-1){
                    cout << -1 << '\n';
                    exit(0);
                }
            }
            if(j == n){
                cout << -1 << '\n';
                exit(0);
            }
        }
        else
            i++;
    }

    cout << moves.size() << '\n';
    for(i=0; i<moves.size(); i++)
        cout << moves[i] << ' ';

    return 0;
}
