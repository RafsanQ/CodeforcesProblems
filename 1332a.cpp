#include <bits/stdc++.h>
using namespace std;

bool check(int start, int l, int r, int a, int b){
    int aa = a, bb = b, i, e;
    aa -= start - l;
    bb -= r - start;

    for(i=1; ; i++){
        if(i%2){
            aa -= (r-l);
            if(aa <= 0){
                e =
                break;
            }

        }
        else{
            bb -= (r-l);
        }

    }

}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int a, b, c, d, x, y, x1, y1, x2, y2;
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool hor = false, ver = false;

        int aa = a-(x-x1);
        if(x2-x1 >= abs(aa-b)){
            hor = true;
            cout << "1\n";
        }
        int bb = b-(x2-x);
        if(x2-x1 >= abs(a-bb)){
            hor = true;
            cout << "2\n";
        }
        int cc = c-(y-y1);
        if(y2-y1 >= abs(cc-d)){
            ver = true;
            cout << "3\n";
        }
        int dd = d-(y2-y);
        if(y2-y1 >= abs(c-dd)){
            ver = true;
            cout << "4\n";
        }
        if(hor && ver)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

