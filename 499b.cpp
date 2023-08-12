#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, i, j;
    cin >> n >> m;
    string index[m][2], input;
    bool select[m];
    for(i=0; i<m; i++){
        cin >> index[i][0] >> index[i][1];
        if(index[i][0].length() <= index[i][1].length())
            select[i] = false;
        else
            select[i] = true;
    }
    for(i=0; i<n; i++){
        cin >> input;
        for(j=0; j<m; j++){
            if(input == index[j][0]){
                if(select[j])
                    cout << index[j][1] << " ";
                else
                    cout << index[j][0] << " ";
                break;
            }
        }
    }
    return 0;
}
