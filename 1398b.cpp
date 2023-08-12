#include <bits/stdc++.h>
using namespace std;

vector<int> getMaxConsecutiveOnes(string s){
    vector<int> res;
    int i, n = s.length(), cnt = 0, mxCnt = 0;
    for(i=0; i<n; i++){
        if(s[i] == '0'){
            if(mxCnt < cnt){
                mxCnt = cnt;
            }
            res.push_back(mxCnt);
            mxCnt = 0;
            cnt = 0;
        }
        else{
            cnt++;
        }
    }
    if(mxCnt < cnt){
        mxCnt = cnt;
        res.push_back(mxCnt);
    }
    sort(res.begin(), res.end(), greater<int>());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        string s;
        cin >> s;
        vector<int> res = getMaxConsecutiveOnes(s);
        int i, a = 0;
        for(int i=0; i<res.size(); i++){
            if(i%2 == 0)
                a += res[i];
        }
        cout << a << '\n';
    }

    return 0;
}

