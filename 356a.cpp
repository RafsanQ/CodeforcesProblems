#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, i;
    map <int, int> index;
    cin >> n >> m;
    for(i=0; i<m; i++){
        int l, r, x;
        cin >> l >> r >> x;
        for(int j=l; j<=r; j++)
            if(index[j] == 0)
                index[j] = x;
        index[x] = 0;
    }
    for(auto itr = index.begin(); itr != index.end(); itr++)
        cout << itr->second << " ";
    return 0;
}
