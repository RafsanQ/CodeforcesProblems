#include <bits/stdc++.h>
using namespace std;

int getColorVal(int node, string colors){
    if(colors[node-1] == 'W')
        return 1;
    else
        return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int a[n+1];

        map<int, vector<int>> childrenList;

        for(int i=2; i<=n; i++){
            cin >> a[i];
            childrenList[a[i]].push_back(i);
        }

        string colors;
        cin >> colors;

        vector<int> traversalOrder;
        bool isVisited[n+1] = {false};



        //BFS

        queue<int> frontier;

        frontier.push(1);

        while(!frontier.empty()){
            int thisNode = frontier.front();
            frontier.pop();

            isVisited[thisNode] = true;
            traversalOrder.push_back(thisNode);

            vector<int> children = childrenList[thisNode];

            for(int child : children){
                if(!isVisited[child])
                    frontier.push(child);
            }
        }

        map<int, int> balanceCalc;
        int counter = 0;

        while(!traversalOrder.empty()){
            int thisNode = traversalOrder.back();
            traversalOrder.pop_back();

            balanceCalc[thisNode] += getColorVal(thisNode, colors);

            vector<int> children = childrenList[thisNode];

            for(int child : children){
                balanceCalc[thisNode] += balanceCalc[child];
            }

            if(balanceCalc[thisNode] == 0)
                counter++;
        }

        cout << counter << '\n';

    }

    return 0;
}

