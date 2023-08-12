#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string word;
        for(int i=0; i<8; i++){
            string row;
            cin >> row;

            for(char c : row){
                if(c != '.'){
                    word.push_back(c);
                }
            }
        }
        cout << word << '\n';
    }

    return 0;
}
