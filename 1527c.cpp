#include <bits/stdc++.h>
using namespace std;

vector<int> a;

map<int, vector<int>> mapIndex;

int getWeight(int i, int j){

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n; i++){
            int input;
            cin >> input;
            a.push_back(input);

            mapIndex[input].push_back(i);
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                sum += getWeight(i, j);
            }
        }
        cout << sum << '\n';

    }

    return 0;
}
