#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, sum = 0;
    char pointer = 'a';
    string input;
    cin >> input;
    for(i=0; input[i]; i++){
        int way1 = 0, way2 = 0;
        way1 = abs(input.at(i) - pointer);
        way2 = min(abs(pointer - 'a') + 1 + abs('z' - input.at(i)), abs(pointer - 'z') + 1 + abs('a' - input.at(i)));
        pointer = input.at(i);
        sum += min(way1, way2);
    }
    cout << sum << endl;
    return 0;
}
