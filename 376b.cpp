#include <bits/stdc++.h>
using namespace std;

struct DebtTracker{
    map<int, vector<pair<int, int>>> TrackerForWhoOwesWhat;
    map<int, vector<pair<int, int>>> TrackerForWhoGetsWhat;

    bool owesAlready(int a, int b){
        vector<pair<int,int>> listOfDebts = TrackerForWhoOwesWhat[a];
        for(int i=0; i<listOfDebts.size(); i++){
            if(listOfDebts[i].first == b)
                return true;
        }
        return false;
    }

    // a owes b an amount of amount
    void addDebt(int a, int b, int amount){
        if(owesAlready(a,b)){
            vector<pair<int, int>>> thisList = TrackerForWhoOwesWhat[a];
            int i;
            for(i=0; i<thisList.size(); i++){
                if(thisList[i].first == b)
                    break;
            }
            TrackerForWhoOwesWhat[a][i].second += amount;

            thisList = TrackerForWhoGetsWhat[b];
            for(i=0; i<thisList.size(); i++){
                if(thisList[i].first == a)
                    break;
            }
            TrackerForWhoGetsWhat[b][i].second += amount;
            return;
        }

        if(owesAlready(b,a)){
            vector<pair<int, int>>> thisList = TrackerForWhoOwesWhat[b];
            int i;
            for(i=0; i<thisList.size(); i++){
                if(thisList[i].first == a)
                    break;
            }
            TrackerForWhoOwesWhat[b][i].second -= amount;

            thisList = TrackerForWhoGetsWhat[a];
            for(i=0; i<thisList.size(); i++){
                if(thisList[i].first == b)
                    break;
            }
            TrackerForWhoGetsWhat[a][i].second -= amount;

            if(TrackerForWhoGetsWhat[b][i].second < 0){
                int debt = abs(TrackerForWhoGetsWhat[b][i].second);
                TrackerForWhoGetsWhat[b][i].second = 0;

            }

            return;
        }

        TrackerForWhoOwesWhat[a].push_back({b, amount});
        TrackerForWhoGetsWhat[b].push_back({a, amount});
    }



};

int main(){
    int n, m;
    cin >> n >> m;




    return 0;
}
