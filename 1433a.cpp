#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        string x;
        cin >> x;

        int ar[] = {1,2,3,4};

        int digitno = x.front() - '0';
        int buttonsPressed = (digitno-1)*10;

        for(int i=0; i<x.size(); i++){
            buttonsPressed += ar[i];
        }
        cout << buttonsPressed << '\n';
    }
    return 0;
}

