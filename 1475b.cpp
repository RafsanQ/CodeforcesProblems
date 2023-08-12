#include <bits/stdc++.h>
using namespace std;

bool dp[1000000];

bool isValid(int n){

    if(n < 0)
        return false;

    else if(n == 0){
        return dp[n] = true;
    }

    else if(dp[n]){
        return dp[n];
    }

    else if(isValid(n-2020) && n-2020 >= 0){
        return dp[n-2020] = true;
    }

    else if(isValid(n-2021) && n-2021 >= 0){
        return dp[n-2021] = true;
    }

    return false;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(isValid(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
