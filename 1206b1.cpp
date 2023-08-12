#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n, i, neg1 = 0, zero = 0, pos1 =  0, cnt = 0;
    cin >> n;
    long int a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 0){
            zero++;
            continue;
        }

        cnt += abs(a[i]) - 1;

        if(a[i] >= 1)
            pos1++;

        else if(a[i] <= -1)
            neg1++;
    }
    if(neg1%2 == 0){
        cnt += zero;
    }
    else{
        if(zero == 0){
            cnt += 2;
        }
        else
            cnt += zero;
    }

    cout << cnt << '\n';

    return 0;
}
