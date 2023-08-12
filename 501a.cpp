#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mishaPoints = max(a*3/10.0, a-a/250.0*c);
    int vasyaPoints = max(b*3/10.0, b-b/250.0*d);

    if(mishaPoints > vasyaPoints)
        cout << "Misha\n";
    else if(mishaPoints < vasyaPoints)
        cout << "Vasya\n";
    else
        cout << "Tie\n";

    return 0;
}

