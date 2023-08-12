#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int src, dest;
    int64_t weight;

    void print(){
        cout << src << ' ' << dest << ' ' << weight << '\n';
    }
};

bool Compare(Edge a, Edge b){
    return a.weight >= b.weight;
}

struct Graph{

    unordered_map<int, vector<Edge>> adjacencyList;

    unordered_map<int,int64_t> result;

    unordered_map<int, bool> visitedMap;

    vector<int> path;

    bool isVisited(int n){
        return visitedMap[n];
    }

    void makeVisited(int n){
        visitedMap[n] = true;
    }

    void addEdge(int src, int dest, int64_t weight){
        Edge e;
        e.src = src;
        e.dest = dest;
        e.weight = weight;
        adjacencyList[src].push_back(e);
    }

    vector<Edge> getAdjcencyList(int node){
        return adjacencyList[node];
    }


    int dijkstra(int src, int dest){
        result[src] = 0;
        makeVisited(src);

        priority_queue<Edge, vector<Edge>, function<bool(Edge, Edge)>> frontier(Compare);


        for(Edge thisEdge : getAdjcencyList(src)){
            frontier.push(thisEdge);
//            cout << "adding node ";
//            thisEdge.print();
        }

        while(!frontier.empty()){
            Edge nextEdge = frontier.top();
            frontier.pop();
            result[nextEdge.dest] = result[nextEdge.src] + nextEdge.weight;
            makeVisited(nextEdge.dest);

//            cout << "Expanding Node " << nextEdge.dest << '\n';
            for(Edge thisEdge : getAdjcencyList(nextEdge.dest)){
                if(!isVisited(thisEdge.dest))
                    frontier.push(thisEdge);
            }

            if(nextEdge.dest == dest)
                break;
        }

//
//        for(auto it=result.begin(); it!=result.end(); it++){
//            if(it->second == 0 && it->first != src)
//                it->second = INT_MAX;
//        }
//
//
//        for(auto it=adjacencyList.begin(); it!=adjacencyList.end(); it++){
//            if(!isVisited(it->first))
//                result[it->first] = INT_MAX;
//        }
//
//        if(!isVisited(dest))
//            return result[dest] = INT_MAX;

        return result[dest];
    }

    vector<int> getPath(int src, int dest){
        visitedMap.clear();
        int currentNode = dest;
        while(currentNode != src){
            makeVisited(currentNode);
//            cout << "Going to " << currentNode << '\n';
            path.push_back(currentNode);
            vector<Edge> adjacentEdges = getAdjcencyList(currentNode);

            int64_t nextNode, nextNodeDistance = INT_MAX;
            for(Edge thisEdge : adjacentEdges){
//                cout << "this edge ";
//                thisEdge.print();
//                cout << "distance from " << thisEdge.dest << '=' << (int64_t)result[thisEdge.dest] + thisEdge.weight << '\n';
//                cout << "Previous Distanc=" << nextNodeDistance << '\n';
                if(nextNodeDistance > (int64_t)result[thisEdge.dest] + thisEdge.weight && !isVisited(thisEdge.dest)){
//                    cout << "replacing\n";
                    nextNode = thisEdge.dest;
                    nextNodeDistance = (int64_t)result[thisEdge.dest] + thisEdge.weight;
                }
            }
            currentNode = nextNode;
        }

        path.push_back(src);
        reverse(path.begin(), path.end());

        return path;
    }
};

int main(){
    Graph graph;

    int n, m;
    cin >> n >> m;


    for(int i=0; i<m; i++){
        int a, b, w;

        cin >> a >> b >> w;

        graph.addEdge(a, b, w);
        graph.addEdge(b, a, w);
    }


    graph.dijkstra(1, n);

    for(int i=1; i<=n; i++){
        if(!graph.isVisited(i))
            graph.result[i] = INT_MAX;
    }

    if(graph.result[n] == INT_MAX){
        cout << "-1\n";
        return 0;
    }





    vector<int> path = graph.getPath(1,n);



    for(int node : path){
        cout << node << ' ';
    }


    return 0;

}

