#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n % 2 == 0){
        if(n==2)
            return true;
        else
            return false;
    }

    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;

        int smallestPrimeFactor;
        if(n%2 == 0){
            smallestPrimeFactor = 2;
        }
        else{
            for(int i=3; i>=sqrt(n); i+=2){
                if(n%i == 0){
                    if(isPrime(i))
                        smallestPrimeFactor = i;
                        break;
                }

                // n is prime itselt
                if(i==sqrt(n)){
                    smallestPrimeFactor = n;
                }
            }
        }

        if(smallestPrimeFactor == n){
            cout << 1 << ' ' << n-1 << '\n';
            continue;
        }

        int a = n/smallestPrimeFactor;
        int b = n-a;

        cout << a << ' ' << b << '\n';
    }
    return 0;
}

