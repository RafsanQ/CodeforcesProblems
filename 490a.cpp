#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, input;
    map <int, vector <int> > mp;
    vector <vector <int> > print;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> input;
        mp[input].push_back(i+1);
    }

    for(i=0; ; i++){
        vector <int> pos;
        if(mp[1].empty() || mp[2].empty() || mp[3].empty())
            break;
        else{
            pos.push_back(mp[1].back());
            pos.push_back(mp[2].back());
            pos.push_back(mp[3].back());
            mp[1].pop_back();
            mp[2].pop_back();
            mp[3].pop_back();
            print.push_back(pos);
        }
    }
    cout << i << endl;
    for(int j=0; j<i; j++){
        for(int k=0; k<3; k++)
            cout << print[j][k] << " ";
        cout << endl;
    }
    return 0;
}
