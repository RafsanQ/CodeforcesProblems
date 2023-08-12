#include <bits/stdc++.h>
using namespace std;

vector<int> arrayToVector(int arr[], int arrSize){
    vector<int> res;
    for(int i=0; i<arrSize; i++){
        res.push_back(arr[i]);
    }
    return res;
}

int getNextIndex(vector<int> v, int currentIndex, int n){
    for(int i=currentIndex; i<v.size(); i++){
        if(v[i] != n)
            return i;
    }
    return v.size();
}

int minDaysWithN(int maxNum, int arr[], int arrSize, int k){
    vector<int> res = arrayToVector(arr, arrSize);

    int totalDays = 0;

    for(int i=getNextIndex(res, 0, maxNum); i<res.size(); ){
        if(res[i] != maxNum){
            i += k;
            totalDays++;
        }
        else
            i = getNextIndex(res, i, maxNum);
    }
    return totalDays;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, k, i;
        cin >> n >> k;
        int a[n];
        set<int> numbers;
        for(i=0; i<n; i++){
            cin >> a[i];
            numbers.insert(a[i]);
        }

        int result = INT_MAX;
        for(auto it=numbers.begin(); it!=numbers.end(); it++){
            result = min(result, minDaysWithN(*it, a, n, k));
        }
        cout << result << '\n';
    }

    return 0;
}
