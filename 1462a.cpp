#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        deque<int> whiteBoard;
        int n, i;
        cin >> n;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            whiteBoard.push_back(input);
        }
        vector<int> res;
        for(i=0; !whiteBoard.empty(); i++){
            if(i%2 == 0){
                res.push_back(whiteBoard.front());
                whiteBoard.pop_front();
            }
            else{
                res.push_back(whiteBoard.back());
                whiteBoard.pop_back();
            }
        }
        for(i=0; i<res.size(); i++){
            cout << res[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
