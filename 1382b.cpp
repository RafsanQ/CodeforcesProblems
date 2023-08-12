#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        vector<int> res;
        cin >> n;
        bool all1 = true;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            if(input != 1)
                all1 = false;
            if(input > 1)
                res.push_back(i+1);
        }
        if(all1){
            if(n%2)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else{
            if(res.empty() || res.front()%2)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }

    return 0;
}
