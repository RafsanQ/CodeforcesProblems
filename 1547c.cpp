#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int k, n, m;
        cin >> k >> n >> m;

        queue<int> a, b;

        for(int i=0; i<n; i++){
            int input;
            cin >> input;
            a.push(input);
        }

        for(int i=0; i<m; i++){
            int input;
            cin >> input;
            b.push(input);
        }

        vector<int> res;

        while(true){
            if(a.empty() && b.empty()){
                break;
            }
            else if(a.empty()){
                int val = b.front();
                b.pop();

                if(val > k){
                    res.clear();
                    res.push_back(-1);
                    break;
                }

                if(val == 0)
                    k++;

                res.push_back(val);
            }
            else if(b.empty()){
                int val = a.front();
                a.pop();

                if(val > k){
                    res.clear();
                    res.push_back(-1);
                    break;
                }

                if(val == 0)
                    k++;

                res.push_back(val);
            }
            else{
                int vala = a.front();
                int valb = b.front();

                if(vala < valb){
                    int val = a.front();
                    a.pop();

                    if(val > k){
                        res.clear();
                        res.push_back(-1);
                        break;
                    }

                    if(val == 0)
                        k++;

                    res.push_back(val);
                }
                else{
                    int val = b.front();
                    b.pop();

                    if(val > k){
                        res.clear();
                        res.push_back(-1);
                        break;
                    }

                    if(val == 0)
                        k++;

                    res.push_back(val);
                }
            }
        }

        for(int val:res){
            cout << val << ' ';
        }
        cout << '\n';

    }

    return 0;
}
