#include <bits/stdc++.h>
using namespace std;

vector<int> transformArray(vector<int> inputArray){

    map<char, int> index;

    for(int i=0; i<inputArray.size(); i++){
        index[inputArray[i]]++;
    }

    vector<int> res = inputArray;
    for(int i=0; i<inputArray.size(); i++){
        res[i] = index[inputArray[i]];
    }

    return res;
}

//
//void printVector(vector<int> v){
//    for(int i=0; i<v.size(); i++){
//        cout << v[i] << ' ';
//    }
//    cout << '\n';
//}

int main(){
    int t, qq;
    cin >> t;
    for(qq=0; qq<t; qq++){
        int n, i;
        cin >> n;
        vector<int> a;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            a.push_back(input);
        }

        int q;
        cin >> q;

        map<int, vector<int>> records;
        records[0] = a;


        vector<pair<int,int>> queries;

        int maxK = -1;

        for(i=0; i<q; i++){
            int x, k;
            cin >> x >> k;
            queries.push_back({x,k});
            maxK = max(maxK, k);
        }

        bool infFound = false;
        int limit = -1;

        for(i=1; i<=maxK; i++){
            a = transformArray(a);
            records[i] = a;

            if(records[i-1] == records[i]){
                infFound = true;
                limit = i;
                break;
            }
        }


        for(i=0; i<q; i++){
            int x = queries[i].first;
            int k = queries[i].second;

            if(infFound){
                if(k < limit)
                    cout << records[k][x-1] << '\n';
                else
                    cout << records[limit][x-1] << '\n';
            }
            else{
                cout << records[k][x-1] << '\n';
            }

        }
    }

    return 0;
}

