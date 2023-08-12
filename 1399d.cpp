#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i, j;
        string s;
        cin >> n >> s;
        vector<int> res;
        vector<stack<char>> index;
        vector<stack<char>> index0, index1;
        for(i=0; s[i]; i++){
            if((s[i] == '0' && index1.empty()) || (s[i] == '1' && index0.empty())){
                if(s[i] == '0'){
                    stack<char> temp;
                    temp.push(s[i]);
                    index.push_back(temp);
                    res.push_back(index.size());
                }
                else{
                    stack<char> temp;
                    temp.push(s[i]);
                    index.push_back(temp);
                    res.push_back(index.size());
                }
            }
            bool found = false;
            for(j=0; j<index.size(); j++){
                if(index[j].top() != s[i]){
                    index[j].push(s[i]);
                    res.push_back(j+1);
                    found = true;
                    break;
                }
            }
            if(!found){
                stack<char> temp;
                temp.push(s[i]);
                index.push_back(temp);
                res.push_back(index.size());
            }
        }
        cout << index.size() << '\n';
        for(i=0; i<res.size(); i++){
            cout << res[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
