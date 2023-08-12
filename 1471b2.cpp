#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, x, i;
        cin >> n >> x;

        int sum = 0;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            sum += input;
            if(input%x == 0){
                sum += input;
            }

            else
                break;
        }
        cout << sum << '\n';
    }

    return 0;
}

