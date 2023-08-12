#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> s;
        for(int i=0; i<n; i++){
            int input;
            cin >> input;
            s.push_back(input);
        }

        vector<int> s_sorted = s;

        sort(s_sorted.begin(), s_sorted.end());

        int maxS1 = s_sorted.back();
        s_sorted.pop_back();
        int maxS2 = s_sorted.back();

        for(int i=0; i<n; i++){
            if(s[i] < maxS1)
                cout << s[i] - maxS1 << ' ';
            else
                cout << s[i] - maxS2 << ' ';
        }
        cout << '\n';
    }

    return 0;
}
