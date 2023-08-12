#include <bits/stdc++.h>
#define INF INT_MAX/2
using namespace std;

vector<int> a;
vector<int> dp;

int call(int dayNo, int lastCodingDay, int lastGymDay){
    if(dayNo >= a.size())
        return 0;

    if(dp[dayNo] != -1)
        return dp[dayNo];

    int doNothingOption = INF, codeOption = INF, gymOption = INF;

    doNothingOption = 1 + call(dayNo+1, lastCodingDay, lastGymDay);
    cout << "do nothing on day " << dayNo << '\n';

    if(lastCodingDay != dayNo-1 && (a[dayNo] == 1 || a[dayNo] == 3)){
        codeOption = call(dayNo+1, dayNo, lastCodingDay);
        cout << "code on day " << dayNo << '\n';
    }

    if(lastGymDay != dayNo-1 && (a[dayNo] == 2 || a[dayNo] == 3)){
        gymOption = call(dayNo+1, lastCodingDay, dayNo);
        cout << "gym on day " << dayNo << '\n';
    }

    dp[dayNo] = min(min(gymOption, codeOption), doNothingOption);
    cout << "dayNo " << dayNo << " value=" << dp[dayNo] << '\n';

    return dp[dayNo];
}

int main(){
    int n, i;
    cin >> n;
    for(i=0; i<n; i++){
        int input;
        cin >> input;
        a.push_back(input);
        dp.push_back(-1);
    }

    cout << call(n-1, INF, INF) << '\n';

    return 0;
}
