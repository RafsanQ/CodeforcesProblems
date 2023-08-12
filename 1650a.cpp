#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, string s){
    int left = i;
    int right = s.size() - 1 - i;

//    cout << "L=" << left << " R=" << right << '\n';

    return (left%2 == 0) && (right%2 == 0);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        char c;
        cin >> s >> c;
        vector<int> positions;
        for(int i=0; s[i]; i++){
            if(s[i] == c)
                positions.push_back(i);
        }

        bool res = false;
        for(int i : positions){
//            cout << "Checking pos " << i << '\n';
            if(isValid(i, s)){
//                cout << "Found\n";
                res = true;
                break;
            }
        }

        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
