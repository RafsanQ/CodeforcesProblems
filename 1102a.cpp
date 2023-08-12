#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int segment = n%4;

    if(segment == 1 || segment == 2){
        cout << "1\n";
    }
    else{
        cout << "0\n";
    }

    return 0;
}
