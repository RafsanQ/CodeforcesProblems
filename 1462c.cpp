#include <bits/stdc++.h>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n;
        cin >> n;
        vector<int> res;
        bool found = false;
        for(int i=9; i>0; i--){
            if(n < 10){
                if(i > n){
                    res.push_back(n);
                    found = true;
                    break;
                }
                else{
                    found = false;
                    break;
                }
            }
            n -= i;
            res.push_back(i);
        }
        reverse(res.begin(), res.end());
        if(found){
            for(int i=0; i<res.size(); i++){
                cout << res[i];
            }
            cout << '\n';
        }

        else
            cout << "-1\n";
    }

    return 0;
}

