#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        pair<int,int> bestResponse = {-1,-1};

        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
            if(a <= 10){
                if(b > bestResponse.second){
                    bestResponse = {i,b};
                }
            }
        }

        cout << bestResponse.first+1 << '\n';
    }

    return 0;
}
