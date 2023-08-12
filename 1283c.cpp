#include <bits/stdc++.h>
using namespace std;

void copybool(bool ar1[][2], bool ar2[][2], int n){
    for(int i=0; i<n; ++i){
        ar2[i][1] = ar1[i][1];
        ar2[i][2] = ar1[i][2];
    }
}

int main(){
    int n, i, j;
    cin >> n;
    int in[n];
    bool chc[n][2] = {false};
    for(i=0; i<n; ++i)
        cin >> in[i];
    for(i=0; i<n; ++i){
        if(in[i] > 0){
            chc[i][0] = true;
            chc[in[i]-1][1] =  true;
        }
    }
    bool chc2[n][2];
    copybool(chc, chc2, n);
    for(i=0; i<2; ++i){
        for(j=0; j<n; ++j){
            cout << chc[j][i] << "\t";
        }
        cout << "\n";
    }
    for(i=0; i<2; ++i){
        for(j=0; j<n; ++j){
            cout << chc2[j][i] << "\t";
        }
        cout << "\n";
    }

    for(i=0; i<n; ++i){
        if(!chc[i][0]) for(j=0; j<n; ++j){

        }
    }


    return 0;
}
