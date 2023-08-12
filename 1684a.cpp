#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;

        if(n.length() == 1){
            cout << n << '\n';
        }
        else if(n.length() == 2){
            cout << n[1] << '\n';
        }
        else{
            char res = '9'+1;
            for(char thisChar : n){
                if(thisChar < res){
                    res = thisChar;
                }
            }
            cout << res << '\n';
        }

    }

    return 0;
}
