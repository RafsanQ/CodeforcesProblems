#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, m, i;
        cin >> n >> m;
        unordered_map<int,bool> index;
        vector<int> res;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            index[input] = true;
        }
        for(i=0; i<m; i++){
            int input;
            cin >> input;
            if(index[input])
                res.push_back(input);
        }
        if(res.empty())
            cout << "NO\n";
        else
            cout << "YES\n1 " << res.front() << '\n';
    }

    return 0;
}

