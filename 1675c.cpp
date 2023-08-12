#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.length() == 1 || s.front() == '0' || s.back() == '1'){
            cout << "1\n";
            continue;
        }

        int last1Index = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1')
                last1Index = i;
        }

        int first0Index = s.length()-1;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == '0')
                first0Index = i;
        }
        cout << first0Index - last1Index + 1 << '\n';

    }

    return 0;
}
