#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){

        stack<int> frontier;
        map<int,vector<int>> childrenList;

        int n;
        cin >> n;

        int p[n+1];
        bool isVisited[n+1] = {false};

        for(int i=1; i<=n; i++){
            cin >> p[i];

            if(p[i] == i){
                frontier.push(i);
            }
            else{
                childrenList[p[i]].push_back(i);

            }

        }

        vector<vector<int>> pathList;
        vector<int> path;


        // dfs
        while(!frontier.empty()){
            int currentNode = frontier.top();
            frontier.pop();
            isVisited[currentNode] = true;

//            cout << "expanding " << currentNode << '\n';

//            bool found = false;
//            for(int i=1; i<=n; i++){
//                if(p[i] == currentNode && !isVisited[i]){
////                    cout << "adding " << i << '\n';
//                    frontier.push(i);
//                    found = true;
//                }
//            }

            vector<int> children = childrenList[currentNode];

            for(int child : children){
                if(!isVisited[child]){
                    frontier.push(child);
                }
            }

            path.push_back(currentNode);

            // It is a leaf node
            if(children.empty()){
//                cout << "Path Found\n";
//                for(int node : path){
//                    cout << node << ' ';
//                }
//                cout << '\n';
                pathList.push_back(path);
                path.clear();
            }

        }

        cout << pathList.size() << '\n';
        for(vector<int> thisPath : pathList){
            cout << thisPath.size() << '\n';
            for(int node : thisPath){
                cout << node << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}

