#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int cnt = 0;
    for(int i=0; s[i]; i++){
        if(s[i] == 'Q'){
            for(int j=i+1; s[j]; j++){
                if(s[j] == 'A'){
                    for(int k=j+1; s[k]; k++){
                        if(s[k] == 'Q')
                            cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}
