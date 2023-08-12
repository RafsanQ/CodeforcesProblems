#include <bits/stdc++.h>
using namespace std;

struct Cordinate{
    int x, w, index;

    void print(){
        cout << index << ' ' << x << ' ' << w << '\n';
    }
};

bool compareWeights(Cordinate a, Cordinate b){
    return a.w < b.w;
}

bool compareXCordinates(Cordinate a, Cordinate b){
    return a.x < b.x;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<Cordinate> cordinates;

        for(int i=0; i<m; i++){
            Cordinate cordinate;
            cin >> cordinate.x >> cordinate.w;
            cordinate.index = i+1;
            cordinates.push_back(cordinate);
        }

        sort(cordinates.begin(), cordinates.end(), compareWeights);

        cordinates.resize(2*n);

        sort(cordinates.begin(), cordinates.end(), compareXCordinates);

//        cout << '\n';
//        for(Cordinate cordinate : cordinates){
//            cordinate.print();
//        }

        deque<Cordinate> deck;

        for(Cordinate cordinate : cordinates){
            deck.push_back(cordinate);
        }

        int total = 0;
        vector<pair<int,int>> result;

        while(!deck.empty()){
            Cordinate cordinate1 = deck.front();
            Cordinate cordinate2 = deck.back();

            result.push_back({cordinate1.index, cordinate2.index});

            total += (cordinate1.w + cordinate2.w);

            deck.pop_front();
            deck.pop_back();
        }

        cout << total << '\n';
        for(pair<int,int> indices : result){
            cout << indices.first << ' ' << indices.second << '\n';
        }
        cout << '\n';
    }

    return 0;
}

