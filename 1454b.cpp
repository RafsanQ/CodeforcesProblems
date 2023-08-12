#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int a[n];
        map<int,int> freq;
        for(i=0; i<n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        vector<int> res;
        for(auto it=freq.begin(); it!=freq.end(); it++){
            if(it->second == 1)
                res.push_back(it->first);
        }
        if(res.size() < 1)
            cout << "-1\n";
        else{
            for(i=0; i<n; i++){
                if(a[i] == res.front()){
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}

