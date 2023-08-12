#include <bits/stdc++.h>
using namespace std;

int getSumDigits(string s){
    int sum = 0;
    for(int i=0; s[i]; i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, i, ii = 0;
    cin >> k;
    for(i=0; ; i++){
        if(getSumDigits(to_string(i)) == 10)
            ii++;
        if(ii == k)
            break;
    }
    cout << i;
    return 0;
}

