#include <bits/stdc++.h>
using namespace std;

void addAtEnd(vector<int> *arr, int input, int freq){
    for(int i=0; i<freq; i++){
        (*arr).push_back(input);
    }
}

int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, x, i;
        vector<int> arr;
        cin >> n >> x;
        for(i=0; i<n; i++){
            int input;
            cin >> input;
            arr.push_back(input);
        }
        int sum = 0;
        for(i=0; i<arr.size(); i++){
            sum += arr[i];
            if(arr[i]%x == 0)
                sum += arr[i];
            else
                break;
            cout << sum << '\n';
        }

        for(++i; i<arr.size(); i++){
            sum += arr[i];
            cout << sum << '\n';
        }
        cout << sum << '\n';
    }

    return 0;
}
