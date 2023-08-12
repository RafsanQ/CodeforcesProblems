#include <bits/stdc++.h>
using namespace std;

int64_t factorialDP[100002];

int64_t factorial(int n){

    if(factorialDP[n] != -1){
        return factorialDP[n];
    }

    if(n == 2){
        return 2;
    }

    else if(n <= 1)
        return 1;
    }

    factorialDP[n] = factorial(n-1)*n;

    return factorialDP[n];
}

int64_t nCr(int n, int r) {
    if(n == r){
        return 1;
    }

    if(r == 1){
        return n;
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i=0; i<100002; i++){
            factorialDP[i] = -1;
        }

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        map<int, int> index;

        int b[n];
        for(int i=0; i<n; i++){
            b[i] = a[i]-i;
            index[b[i]]++;
        }

        int64_t total = 0;
        for(auto it=index.begin(); it!=index.end(); it++){
            int numberFound = it->second;
            if(numberFound > 1){
                total += nCr(numberFound,2);
            }
        }

        cout << total << '\n';
    }

    return 0;
}

