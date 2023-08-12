#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[201][201];


int64_t getAttackedValue(int x, int y){
    int64_t total = 0;
    int i, j;

    for(i=x, j=y; i<n && j<m; i++, j++){
        total += a[i][j];
    }
    total -= a[x][y];

    for(i=x, j=y; i>=0 && j>=0; i--, j--){
        total += a[i][j];
    }
    total -= a[x][y];

    for(i=x, j=y; i<n && j>=0; i++, j--){
        total += a[i][j];
    }
    total -= a[x][y];

    for(i=x, j=y; i>=0 && j<m; i--, j++){
        total += a[i][j];
    }

    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){

        cin >> n >> m;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        int64_t maxVal = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                maxVal = max(maxVal, getAttackedValue(i,j));
            }
        }

        cout << maxVal << '\n';
    }

    return 0;
}



