#include <bits/stdc++.h>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        vector<int> a;
        cin >> n;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            if(a.empty() || input != a.back())
                a.push_back(input);
        }
        map<int,int> freq;
        for(i=0; i<a.size(); i++){
            freq[a[i]]++;
        }
        int res = 0;
        for(auto it=freq.begin(); it!=freq.end(); it++){
            res = max(res, it->second);
        }
        cout << res-1 << '\n';
    }
    return 0;
}
