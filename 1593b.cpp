#include <bits/stdc++.h>
using namespace std;

int64_t removeLastDigit(int64_t n){
    string number = to_string(n);
    number.pop_back();
    return stoll(number);
}

int64_t removeSecondLastDigit(int64_t n){
    string number = to_string(n);
    char lastDigit = number.back();
    number.pop_back();
    number.pop_back();
    number.push_back(lastDigit);
    return stoll(number);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int64_t n, cnt = 0;
        cin >> n;

        while(true){
            if(n%10 == 0){
                int nn = n/10;
                if(nn%10 == 0 || nn%10 == 5){
                    break;
                }
            }
            if(n%10 == 5){

            }
            cnt++;
            n = removeLastDigit(n);

        }

    }

    return 0;
}

