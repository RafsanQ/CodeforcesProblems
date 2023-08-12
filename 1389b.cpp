#include <bits/stdc++.h>
using namespace std;

int getSum(int n, int k, int z, int reqIndex, int a[]){
    int sum = 0;
    for(int i=0; i<n && k>=0; i++){
        sum += a[i];
        if(i > reqIndex && z > 0){
            i -= 2;
            z--;
        }
        k--;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, k, z, i;
        cin >> n >> k >> z;
        int a[n];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        int reqIndex, mx = 0;
        vector<int> reqIndexVec;
        for(i=0; i<n-1; i++){
            if(a[i] + a[i+1] > mx && (i-k) <= z){
                mx = a[i] + a[i+1];
                reqIndex = i;
                reqIndexVec.push_back(reqIndex);
            }
        }
        int sum = 0;
        for(i=0; i<reqIndexVec.size(); i++){
            reqIndex = reqIndexVec[i];
            sum = max(sum, getSum(n,k,z, reqIndex,a));
        }
        cout << sum << '\n';
    }

    return 0;
}



