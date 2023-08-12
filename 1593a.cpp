#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c){
    return max(max(a,b),c);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int a, b, c;
        cin >> a >> b >> c;
        int maxVotes = max(a,b,c);

        if(a == maxVotes){
            if(b == maxVotes || c == maxVotes)
                cout << 1;
            else
                cout << 0;
        }

        else
            cout << maxVotes-a+1;

        cout << ' ';

        if(b == maxVotes){
            if(a == maxVotes || c == maxVotes)
                cout << 1;
            else
                cout << 0;
        }
        else
            cout << maxVotes-b+1;

        cout << ' ';

        if(c == maxVotes){
            if(a == maxVotes || b == maxVotes)
                cout << 1;
            else
                cout << 0;
        }
        else
            cout << maxVotes-c+1;

        cout << '\n';

    }

    return 0;
}
