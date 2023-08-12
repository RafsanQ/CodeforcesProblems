#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int r, b, d, i;
        cin >> r >> b >> d;
        bool res = true;
        if(r > b){
            while(r-b > d){
                r--;
                b -= d;
                if(r < 0 || b < 0){
                    res = false;
                    break;
                }
            }
        }

        else{
            while(b-r > d){
                b--;
                r -= d;
                if(r < 0 || b < 0){
                    res = false;
                    break;
                }
            }
        }
        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}
