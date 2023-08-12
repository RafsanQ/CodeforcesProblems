#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int64_t x, n, i;
        cin >> x >> n;
        cout << n/4*4 <<'\n';
        for(i=n/4*4+1; i<=n; i++){

            int64_t toJump;

            // Even Position
            if(x%2 == 0){
                toJump = -1*i;
            }

            // Odd Position
            else{
                toJump = i;
            }
            x += toJump;
            printf("i = %d\tx = %d\n", i, x);
        }
        printf("so Final Pos = %d\n", x);
    }

    return 0;
}
