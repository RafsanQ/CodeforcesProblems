#include <bits/stdc++.h>
using namespace std;

int32_t f(int32_t x, int32_t a){
    return x/a + x%a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r, a;
        cin >> l >> r >> a;

        int x = r;
        int result = f(x,a);

        x = r/a * a;
        x--;
        if(x >= l)
            result = max(result, f(x,a));

        cout << result << '\n';
    }

    return 0;
}
