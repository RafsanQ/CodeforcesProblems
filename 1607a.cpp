#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        map<char, int> keyboard;

        string input;
        cin >> input;

        for(int i=0; input[i]; i++){
            keyboard[input[i]] = i+1;
        }

        cin >> input;

        if(input.length() <= 1){
            cout << "0\n";
            continue;
        }

        int time = 0;
        for(int i=0; input[i+1]; i++){
            char firstLetter = input[i];
            char secondLetter = input[i+1];
            time += abs(keyboard[firstLetter]-keyboard[secondLetter]);
        }
        cout << time << '\n';
    }

    return 0;
}
