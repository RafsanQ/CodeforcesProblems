#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int arrSize){
    int sum = 0, i;
    for(i=0; i<arrSize; i++){
        sum += arr[i];
    }
    return sum;
}

bool isBeautiful(int b[], int aSize, int a[]){
    int sum = 0, i;
    for(i=0; i<aSize; i++){
        sum += abs(b[i]-a[i]);
    }
    sum *= 2;
    int aSum = getSum(a, aSize);
    if(sum <= aSum)
        return true;
    else
        return false;
}

int main(){
    int t, q;
    cin >> t;
    for(q=0; q<t; q++){
        int n, i;
        cin >> n;
        int a[n];
        set<int> index;

        for(i=0; i<n; i++){
            cin >> a[i];
            index.insert(a[i]);
        }

        int b[n];
        for(auto it=index.begin(); it!=index.end(); it++){
            int value = *it;
            for(i=0; i<n; i++){
                b[i] = value;
            }
            if(isBeautiful(b, n, a))
                break;
        }

        for(i=0; i<n; i++){
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
