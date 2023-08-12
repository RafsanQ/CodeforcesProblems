#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, inm, inc, cm = 0, cc = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> inm >> inc;
        if(inm > inc)
            cm++;
        else if(inm < inc)
            cc++;
    }
    if(cm > cc)
        cout << "Mishka" << endl;
    else if(cm < cc)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}
