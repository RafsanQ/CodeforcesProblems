#include <bits/stdc++.h>
using namespace std;
int main(){
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int tot1 = s*v1 + 2*t1;
    int tot2 = s*v2 + 2*t2;
    if(tot1 < tot2)
        cout << "First\n";
    else if(tot1 > tot2)
        cout << "Second\n";
    else
        cout << "Friendship\n";

    return 0;
}

