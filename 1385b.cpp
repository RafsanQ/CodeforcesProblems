#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        map<int, bool> index;
        vector<int> res;
        cin >> n;
        for(i=0; i<2*n; i++){
            int input;
            cin >> input;
            if(!index[input]){
                index[input] = true;
                res.push_back(input);
            }
        }
        for(i=0; i<res.size(); i++){
            cout << res[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
