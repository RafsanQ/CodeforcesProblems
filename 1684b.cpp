#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int x, y, z;

        z = c;
        y = b + c;
        x = a + b + c;

        printf("%d %d %d\n", x, y, z);
    }

    return 0;
}
