#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string res;
        int sum = 0;
        bool isEvenNext = true;

        while(sum < n){
            if(isEvenNext){
                res.push_back('2');
                sum += 2;
                isEvenNext = false;
            }
            else{
                res.push_back('1');
                sum++;
                isEvenNext = true;
            }
        }

        if(sum == n){
            cout << res << '\n';
            continue;
        }


        sum = 0;
        isEvenNext = false;
        res.clear();

        while(sum < n){
            if(isEvenNext){
                res.push_back('2');
                sum += 2;
                isEvenNext = false;
            }
            else{
                res.push_back('1');
                sum++;
                isEvenNext = true;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
