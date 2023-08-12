#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        string a, b;
        vector<int> res;
        cin >> n >> a >> b;
        for(i=0; i<n; i++){
            if(a[i] != b[i]){
                res.push_back(i+1);
                res.push_back(1);
                res.push_back(i+1);
            }
        }
        for(i=0; i<(int)res.size()-1; i++){
            if(res[i] == res[i+1]){
                res[i] = -1;
                res[i+1] = -1;
                i++;
            }
        }
        vector<int> resF;
        for(i=0; i<res.size(); i++){
            if(res[i] != -1)
                resF.push_back(res[i]);
        }
        cout << resF.size() << ' ';
        for(i=0; i<resF.size(); i++){
            cout << resF[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}

