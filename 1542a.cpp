#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int oddNo = 0, evenNo = 0;
        int n, i;
        cin >> n;
        for(i=0; i<2*n; i++){
            int input;
            cin >> input;
            if(input%2 == 1)
                oddNo++;
            else
                evenNo++;
        }
        if(evenNo == oddNo)
            cout << "Yes\n";

        else
            cout << "No\n";
    }
    return 0;
}
