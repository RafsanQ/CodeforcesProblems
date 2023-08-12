#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> q;
    for(t=0; t<q; t++){
        int n, i;
        cin >> n;
        vector<int> odd, even;
        for(i=0; i<2*n; i++){
            int input;
            cin >> input;
            if(input%2)
                odd.push_back(input);
            else
                even.push_back(input);
        }
        vector<pair<int,int>> res;
        for(i=1; i<odd.size(); i+=2){
            res.push_back({odd[i-1], odd[i]});
        }
        for(i=1; i<even.size(); i+=2){
            res.push_back({even[i-1], even[i]});
        }
        for(i=0; i<n-1; i++){
            cout << res[i].first << ' ' << res[i].second << '\n';
        }
    }

    return 0;
}

