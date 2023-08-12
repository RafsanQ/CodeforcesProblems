#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    if(n2 >= n1)
        cout << "Second\n";
    else
        cout << "First\n";

    return 0;
}


