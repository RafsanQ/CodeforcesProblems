#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        map<int, int> counter;

        for(int i=0; i<n; i++){
            int input;
            cin >> input;
            counter[input]++;
        }

        vector<int> numbersToConsider;

        for(auto it=counter.begin(); it!=counter.end(); it++){
            if(it->second >= k){
                numbersToConsider.push_back(it->first);
            }
        }

        if(numbersToConsider.empty()){
            cout << "-1\n";
            continue;
        }


        int finalL = numbersToConsider.front(), finalR = numbersToConsider.front();

        int l = numbersToConsider.front(), r = numbersToConsider.front();

        for(int i=1; i<numbersToConsider.size(); i++){
            if(numbersToConsider[i] - numbersToConsider[i-1] == 1){
                r = numbersToConsider[i];
            }
            else{
                l = numbersToConsider[i];
                r = numbersToConsider[i];
            }


            if(r-l > finalR-finalL){
                finalL = l;
                finalR = r;
            }

        }
        cout << finalL << ' ' << finalR << '\n';

    }

    return 0;
}





