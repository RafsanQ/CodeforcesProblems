#include <bits/stdc++.h>
using namespace std;

bool chkifAlone(char num, string a){
    int n = a.length();
    if(a[0] == num)
        if(a[1] != num || (a[1] == num && a[2] == num))
            return true;
    if(a[n-1] == num)
        if(a[n-2] != num || (a[n-2] == num && a[n-3] == num))
            return true;
    for(int i=1; i<n-1; i++){
        if(a[i] == num && a[i-1] != num && a[i+1] != num)
            return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        string s;
        cin >> s;
        int i, j, res = 0;
        char val;
        bool same = false;
        for(i=0; i<s.length()-1; i++){
            int temp = 1;
            for(j=i+2; j<s.length()-1; j++){
                if(s[i] == s[j] && s[i+1] == s[j+1]){
                    j++;
                    temp++;
                }
            }
            if(res < temp){
                res = max(res,temp);
                val = s[i];
                if(s[i] == s[i+1])
                    same = true;
                else
                    same = false;
            }
        }
        if(same && chkifAlone(val, s))
            cout << s.length() - 2*res-1 << '\n';
        else
            cout << s.length() - 2*res << '\n';
    }

    return 0;
}
