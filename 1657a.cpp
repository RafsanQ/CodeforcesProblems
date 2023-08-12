#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;

        if(x == 0 && y == 0){
            cout << "0\n";
            continue;
        }

        int distance = sqrt(x*x + y*y);
        if(distance*distance == (x*x + y*y)){
            cout << "1\n";
            continue;
        }
        cout << "2\n";
    }

    return 0;
}
