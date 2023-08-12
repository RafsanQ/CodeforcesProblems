#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int64_t x;
        cin >> x;

        if(x == 1){
            cout << "3\n";
            continue;
        }

        bitset<32> bitX(x);

        int ones = 0;
        int firstIndex = -1;
        for (size_t i = 0; i < bitX.size(); ++i) {
            if(bitX[i] == 1){
                ones++;
                if(firstIndex == -1)
                    firstIndex = i;
            }
        }

        if(ones == 1){
            cout << x+1 << '\n';
        }
        else{
            int res = (1 << firstIndex);
            cout << res << '\n';
        }

    }


    return 0;
}
