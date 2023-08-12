#include <bits/stdc++.h>
using namespace std;

int64_t stepsToOdd(int n){
    int64_t cnt = 0;
    while(n%2 == 0){
        n /= 2;
        cnt++;
    }

    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int64_t n;
        cin >> n;

        int64_t oddNumbers = 0, evenNumbers = 0, sum = 0, minEvenNumber = INT_MAX;
        vector<int> a;

        for(int i=0; i<n; i++){
            int64_t input;
            cin >> input;
            a.push_back(input);
            if(input%2 == 0){
                evenNumbers++;
                minEvenNumber = min(minEvenNumber, input);
            }
            else{
                oddNumbers++;
            }
            sum += input;
        }

        if(oddNumbers >= 1){
            cout << evenNumbers << '\n';
            continue;
        }

        int64_t minStepsForOneOdd = INT_MAX;
        for(int num : a){
            minStepsForOneOdd = min(minStepsForOneOdd, stepsToOdd(num));
        }

        cout << minStepsForOneOdd + n - 1 << '\n';

    }


    return 0;
}

