#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, n;
    cin >> n;
    string hashtags[n];
    for(i=0; i<n; i++)
        cin >> hashtags[i];
    i--;
    while(i>0){
        if(hashtags[i] < hashtags[i-1]){
            int start = 1, finish = hashtags[i-1].length()-1;
            int mid = start + (finish-1) / 2;
            string temp = hashtags[i].substr(1, hashtags[i].length());
            while(start <= finish){
                if(hashtags[i-1].substr(start, mid) == temp){
                    hashtags[i-1] = hashtags[i-1].substr(start, mid);
                    break;
                }

                else if(hashtags[i-1].substr(start, mid) < temp){
                    finish = mid;
                    finish += mid + 1;
                }
                else
                    finish = mid - 1;
                mid = (finish)/2 + 1;
            }
        }
        i--;
    }
    for(i=0; i<n; i++)
        cout << hashtags[i] << endl;
    return 0;
}
