#include <bits/stdc++.h>
using namespace std;

int getSumFirstDigits(string s, int digits){
    int i, sum = 0;
    for(i=0; i<digits; i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, digits, cnt = 0;
        string s;
        cin >> n >> s;
        for(digits=1; digits<=n; digits++){
            int i, sum = getSumFirstDigits(s, digits);
            if(sum == digits)
                cnt++;
            for(i=0; i<n-digits; i++){
                sum -= (s[i] - '0');
                sum += (s[i+digits] - '0');
                if(sum == digits)
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
