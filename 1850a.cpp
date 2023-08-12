#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin >> t;
     while(t--){
        int ar[3];
        for(int i=0; i<3; i++){
            cin >> ar[i];
        }

        sort(ar, ar+3);

        if(ar[2] + ar[1] >=10){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
     }

    return 0;
}
