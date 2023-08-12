#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, minutes;
    cin >> a >> b;
    if(a > b)
        swap(a,b);
    bool chargingA = true;
    for(minutes=0; ; minutes++){
        if(chargingA){
            a++;
            b -= 2;
            if(b - 2 <= 0)
                chargingA = false;

        }
        else{
            a -= 2;
            b++;
            if(a - 2 <= 0)
                chargingA = true;
        }
        if(a<=0 || b<=0)
            break;
    }
    cout << minutes+1 << '\n';

    return 0;
}
