#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int64_t n, x, i, sum = 0, maxRes = 0;
        cin >> n >> x;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            sum += input;
            maxRes += ceil((double)input/x);
        }
        cout << (int64_t)ceil((double)sum/x) << ' ' << (int64_t)maxRes << '\n';
    }
    return 0;
}
