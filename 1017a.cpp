#include <bits/stdc++.h>
using namespace std;

bool cmpFunction(pair<int,int> a, pair<int,int> b){
    if(a.second > b.second)
        return true;
    else if(a.second < b.second)
        return false;
    else{
        if(a.first <= b.first)
            return true;
        else
            return false;
    }
}

int main(){
    int n, i;
    cin >> n;
    pair<int,int> table[n];
    for(i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            int input;
            cin >> input;
            sum += input;
        }
        table[i] = {i+1, sum};
    }
    sort(table, table+n, cmpFunction);
    for(i=0; i<n; i++){
        if(table[i].first == 1){
            cout << i+1 << '\n';
            break;
        }
    }
    return 0;
}
