#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i, inPrice, inQuality, temp;
    bool res = false;
    map <int, pair <int, int> > index;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> inPrice >> inQuality;
        index[inPrice].first = min(index[inPrice].first, inQuality);
        index[inPrice].second = max(index[inPrice].second, inQuality);
    }
    auto itr = index.begin();
    temp = itr -> second.second;
    itr++;
    for( ; itr != index.end(); itr++){
        if(temp > (itr -> second.first))
           res = true;
        temp = itr -> second.second;
    }
    if(res)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;

    return 0;
}
