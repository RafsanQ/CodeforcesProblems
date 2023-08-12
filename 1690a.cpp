#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int h1 = n/2;
        int h2 = h1 - 1;
        int h3 = n - (h1+h2);

        printf("%d %d %d\n", h2, h1, h3);
    }

    return 0;
}
