#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    int input[n], sorted[n], input2[n];
    for(i=0; i<n; i++){
        cin >> input[i];
        input2[i] = input[i];
        sorted[i] = input[i];
    }
    sort(sorted, sorted+n);

    for(i=0; i<n; i++){
        if(input2[i] > input2[i+1])
        for(j=1; j<n; j++){

        }
    }




    return 0;
}
