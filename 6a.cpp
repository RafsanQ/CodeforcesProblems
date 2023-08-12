#include <bits/stdc++.h>
using namespace std;
int main(){
    int length[4];
    for(int i=0; i<4; i++){
        cin >> length[i];
    }

    sort(length, length+4, greater<int>());

//    for(int i=0; i<4; i++){
//        cout << length[i] << ' ';
//    }

    if(length[0] < length[1] + length[2] || length[1] < length[2] + length[3]){
        cout << "TRIANGLE\n";
        return 0;
    }

    if(length[0] == length[1] + length[2] || length[0] == length[1] + length[3] || length[1] == length[2] + length[3]){
        cout << "SEGMENT\n";
        return 0;
    }

    cout << "IMPOSSIBLE\n";

    return 0;

}

