#include <bits/stdc++.h>
using namespace std;

int dp[100][100][100];
int lps[100];

void createLCS(string virus){
    int len = 0, i = 1;
    while(i < virus.length()){
        if(virus[i] == virus[len])
            lps[i++] = ++len;
        else if(len > 0)
            len = lps[len-1];
        else
            lps[i++] = 0;
    }
}


void path_print(string s1, string s2, string virus, int i, int j, int k){
    if(i>=s1.size() || j>=s2.size() || k >= virus.length()) return;



    if(s1[i]==s2[j])
    {
        cout << s1[i];
        path_print(s1,s2,virus,i+1,j+1,k);
    }
    else
    {
        if(dp[i+1][j]>dp[i][j+1])
            path_print(s1,s2,virus,i+1,j,k);
        else
            path_print(s1,s2,virus,i,j+1,k);
    }
    return ;
}

int getLCSLength(string a, string b, string virus, int i, int j, int k){
    if(k == virus.length())
        return -500;
    if(i == a.length() || j == b.length())
        return 0;

    if(dp[i][j][k] != -1)
        return dp[i][j][k];

    int res = -500;

    res = max(res, getLCSLength(a,b,virus,i+1,j,k));
    res = max(res, getLCSLength(a,b,virus,i,j+1,k));

    if(a[i] == b[j])
        return dp[i][j][k] = 1 + getLCSLength(a,b,virus,i+1, j+1,k);
    else{
        int len = k;
        while(virus[len] != a[i] && len > 0){
            len = lps[len-1];
        }
        if(a[i] == virus[len])
            res = max(res, 1+getLCSLength(a,b,virus,i+1,j+1,len+1));
        else
            res = max(res, 1+getLCSLength(a,b,virus,i+1,j+1,len));
    }
    return dp[i][j][k] = res;
}

int main(){

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            for(int k=0; k<100; k++){
                dp[i][j][k] = -1;
            }
        }
    }

    string a, b, virus;
    cin >> a >> b >> virus;


    cout << getLCSLength(a,b,virus,0,0,0);




    return 0;
}
