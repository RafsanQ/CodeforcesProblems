#include <bits/stdc++.h>
using namespace std;

int commonDifference;
bool isProgressive(vector<int> a){
    commonDifference = abs(a[0] - a[1]);
    for(int i=1; i<a.size()-1; i++){
        if(abs(a[i]-a[i+1]) != commonDifference)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    map<int, vector<int>> indexList;

    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        indexList[input].push_back(i);
    }

    vector<pair<int,int>> result;

    for(auto it=indexList.begin(); it!=indexList.end(); it++){
        int num = it->first;
        vector<int> indexes = it->second;
        if(indexes.size() == 1){
            result.push_back({num,0});
        }
        else if(indexes.size() == 2){
            result.push_back({num,abs(indexes[0]-indexes[1])});
        }
        else{
            if(isProgressive(indexes)){
                result.push_back({num, commonDifference});
            }
        }
    }

    cout << result.size() << '\n';
    for(int i=0; i<result.size(); i++){
        cout << result[i].first << ' ' << result[i].second << '\n';
    }

    return 0;
}
