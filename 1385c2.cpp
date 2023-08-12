#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i, j, prefix = 0;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        bool goingUp = false;
        for(i=0; i<n-1; i++){
            if(a[i] != a[i+1]){
                if(a[i] > a[i+1])
                    goingUp = false;
                else
                    goingUp = true;
                break;
            }
        }
        for(; i<n-1; i++){
            if(a[i] > a[i+1]){
                if(!goingUp){
                    goingUp = true;
                    prefix = i;
                }
            }
            else if(a[i] < a[i+1]){
                if(goingUp){
                    goingUp = false;
                    prefix = i;
                }
            }
        }
        for( ; prefix > 0; prefix--){
            if(goingUp){
                if(a[prefix] < a[prefix-1])
                    break;
            }
            else{
                if(a[prefix] < a[prefix-1])
                    break;
            }
        }
        cout << prefix << '\n';
    }
    return 0;

}


