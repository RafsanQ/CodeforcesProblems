#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int error[n], after[n] = {-1}, aftera[n] = {-1};
    for(i=0; i<n; i++)
        cin >> error[i];

    for(i=0; i<n-1; i++)
        cin >> after[i];

    for(i=0; i<n-2; i++)
        cin >> aftera[i];

    sort(error, error+n);
    sort(after, after+n-1);
    sort(aftera, aftera+n-2);

    for(i=0; i<n; i++)
        if(error[i] != after[i]){
            cout << error[i] << endl;
            break;
        }

    for(i=0; i<n-1; i++)
        if(after[i] != aftera[i]){
            cout << after[i] << endl;
            break;
        }

    return 0;
}
