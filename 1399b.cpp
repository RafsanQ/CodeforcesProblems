#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, mina = INT_MAX, minb = INT_MAX, i;
        cin >> n;
        int a[n], b[n];
        for(i=0; i<n; i++){
            cin >> a[i];
            mina = min(mina, a[i]);
        }
        for(i=0; i<n; i++){
            cin >> b[i];
            minb = min(minb, b[i]);
        }
        int64_t cnt = 0;
        for(i=0; i<n; i++){
            if(a[i] > mina && b[i] > minb){
                cnt += min((a[i]-mina),(b[i]-minb));
                if((a[i]-mina) <= (b[i]-minb)){
                    b[i] -= a[i] - mina;
                    a[i] = mina;
                    cnt += b[i] - minb;
                }
                else{
                    a[i] -= b[i] - minb;
                    b[i] = minb;
                    cnt += a[i] - mina;
                }
            }
            else if(a[i] > mina && b[i] <= minb){
                cnt += a[i] - mina;
                a[i] = mina;
            }
            else if(a[i] <= mina && b[i] > minb){
                cnt += b[i] - minb;
                b[i] = minb;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}

