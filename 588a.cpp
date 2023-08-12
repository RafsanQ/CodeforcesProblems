#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a, p;
    int minSoFar = INT_MAX;
    int totalCost = 0;

    for(int i=0; i<n; i++){

        cin >> a >> p;

        minSoFar = min(minSoFar, p);

        totalCost += minSoFar*a;

    }

    cout << totalCost << '\n';

    return 0;

}
