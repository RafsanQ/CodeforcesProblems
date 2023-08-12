#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;
    int a[n], pos = 0, zero = 0, neg = 0;
    for(i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }
    if(pos >= ceil((double)n/2))
        cout << "1\n";
    else if(neg >= ceil((double)n/2))
        cout << "-1\n";
    else
        cout << "0\n";

    return 0;
}

