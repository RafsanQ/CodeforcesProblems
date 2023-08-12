#include <bits/stdc++.h>
using namespace std;

int dp[100];

int getMinNoSubtractions(int Number, int cnt){
    if(Number < 0)
        return INT_MAX;

    else if(Number == 0)
        return cnt;

    if(dp[Number] != 0)
        return dp[Number] + cnt;

    string s = to_string(Number);
    cout << "String=" << s << '\n';
    int i, res = INT_MAX;
    for(i=0; s[i]; i++){
        int newNumber = Number - (s[i]-'0');
        res = min(res, 1+getMinNoSubtractions(newNumber, cnt+1));
    }
    dp[Number] = res;
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << getMinNoSubtractions(n, 0) << '\n';

    return 0;
}
