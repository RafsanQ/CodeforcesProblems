#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> counter;
        bool hasSimilar = false;
        for(int i=0; i<n; i++){
            cin >> a[i];
            counter[a[i]]++;
            if(counter[a[i]] > 1)
                hasSimilar = true;
        }

        if(counter[0] > 0){
            cout << n-counter[0] << '\n';
        }
        else if(hasSimilar){
            cout << n << '\n';
        }
        else{
            cout << n+1 << '\n';
        }

    }

    return 0;
}
