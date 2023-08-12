#include <bits/stdc++.h>
using namespace std;

bool isAllDistinct(string s){
    map<char, bool> index;
    for(char c:s){
        if(index[c]){
            return false;
        }
        index[c] = true;
    }
    return true;
}

int main(){
    int l, r, x;
    cin >> l >> r;

    for(int i=l; i<=r; i++){
        if(isAllDistinct(to_string(i))){
            cout << i << '\n';
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}
