#include <bits/stdC++.h>
using namespace std;
int main(){
    int n, i, j;
    vector <pair <int, int> > order;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int ar[n];
    for(i=0; i<n; i++)
        cin >> ar[i];

    for(i=0; i<n; i++){
        int temp = i, mn = ar[i];
        bool op = false;
        for(j=i+1; j<n; j++){
            if(mn > ar[j]){
                temp = j;
                mn = ar[j];
                op = true;
            }
        }
        if(op){
            swap(ar[i], ar[temp]);
            order.push_back({i, temp});
        }
    }
    cout << order.size() << "\n";
    if(order.size() > 0){
        for(i=0; i<order.size(); i++)
            cout << order[i].first << " " << order[i].second << "\n";
    }
    return 0;
}
