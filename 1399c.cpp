#include <bits/stdc++.h>
using namespace std;

int howManyTeams(int w[], int n, int weight, map<int,int> index){
    int cnt = 0, i;
    for(i=0; i<n; i++){
        if(index[w[i]] <= 0)
            continue;
        int toFind = weight - w[i];
        if(binary_search(w, w+n, toFind)){
            if(w[i] == toFind){
                if(index[toFind] <= 1)
                    continue;
            }
            if(index[toFind] > 0){
                cnt++;
                index[w[i]]--;
                index[toFind]--;
            }
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int w[n];
        map<int,int> index;
        for(i=0; i<n; i++){
            cin >> w[i];
            index[w[i]]++;
        }
        if(n == 1){
            cout << "0\n";
            continue;
        }
        if(n == 2 || n == 3){
            cout << "1\n";
            continue;
        }
        sort(w, w+n);
        int mx = w[n-1] + w[n-2], mn = w[0] + w[1];
        int res = -1;
        for(i=mn; i<=mx; i++){
            res = max(res, howManyTeams(w, n, i, index));
        }
        cout << res << '\n';
    }

    return 0;
}


