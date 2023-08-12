#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int steps = 0;

        for(int i=0; i<n-1; i+=2){
            if(s[i] != s[i+1]){
                steps++;

            }
        }
        cout << steps << ' ';


    }
    return 0;
}
