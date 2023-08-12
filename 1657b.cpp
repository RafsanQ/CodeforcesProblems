#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, B, x, y;
        cin >> n >> B >> x >> y;

        vector<int64_t> a;
        a.push_back(0);

        for(int i=0; i<n; i++){
            int64_t prevValue = a.back();
            int64_t newValue;

            if(prevValue + x > B)
                newValue = prevValue - y;

            else
                newValue = prevValue + x;

            a.push_back(newValue);
        }

        int64_t sum = 0;
        for(int num : a){
            sum += num;
        }
        cout << sum << '\n';
    }

    return 0;
}
