#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
int decreaseTo(int toDecrease, int target){
    cnt = 0;
    while(toDecrease >= target){
        toDecrease /= 2;
        cnt++;
    }
    return toDecrease;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<int64_t> a;
        cin >> n;
        for(int i=0; i<n; i++){
            int64_t input;
            cin >> input;
            a.push_back(input);
        }

        int steps = 0;
        for(int i=n-2; i>=0; i--){
            if(a[i] >= a[i+1]){
                if(a[i+1] == 0){
                    steps = -1;
                    break;
                }
                a[i] = decreaseTo(a[i], a[i+1]);
                steps += cnt;
            }
        }
        cout << steps << '\n';
    }

    return 0;
}
