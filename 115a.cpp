#include <bits/stdc++.h>
using namespace std;

struct node{
    int key;
    node* superior;
    vector<node*> juniors;
};

struct node* createNode(int input){
    node* n = new node;
    n->key = input;
    return n;
}

struct node* getNode(node* root, int input){
    queue<node*> q;
    q.push(root);
    node* temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->key == input){
            cout << "found employee " << input << '\n';
            return temp;
        }

        for(int i=0; i<temp->juniors.size(); i++){
            q.push(temp->juniors[i]);
        }
    }
    cout << "could not find employee " << input << '\n';
    return NULL;
}

void insertNode(node* toAdd, node* superior){
    superior->juniors.push_back(toAdd);
}

void insertNode(node* root, node* toAdd, int superiorValue){
    insertNode(toAdd, getNode(root, superiorValue));
}

int getHeight(node* root){
    int height = 1;
    cout << "this Node has " << root->juniors.size() << " juniors" << '\n';
    for(int i=0; i<root->juniors.size(); i++){
        height = max(height, getHeight(root->juniors[i]));
    }
    return height+1;
}

int main(){
    int n, employeeNo;
    cin >> n;
    int employee[n];

    node* root = createNode(-1);

    for(employeeNo=0; employeeNo<n; employeeNo++){
        cin >> employee[employeeNo];
    }

    for(employeeNo=0; employeeNo<n; employeeNo++){
        if(employee[employeeNo] == -1){
            cout << "found a boss\n";
            continue;
        }

        cout << "looking into employeeNo " << employeeNo+1 << '\n';
        int superiorValue = employee[employeeNo];

        if(employee[superiorValue-1] != -1)
            continue;

        cout << "creating employeeNo " << employeeNo + 1 << '\n';
        node* thisEmployeeNode = createNode(employeeNo+1);
        insertNode(thisEmployeeNode, root);
    }

//    for(employeeNo=0; employeeNo<n; employeeNo++){
//        if(employee[employeeNo] == -1){
//            cout << "found a boss\n";
//            continue;
//        }
//
//        cout << "looking into employeeNo " << employeeNo+1 << '\n';
//        int superiorValue = employee[employeeNo];
//
//        cout << "superiorValue=" << superiorValue << '\n';
//
//        node* thisEmployeeNode = createNode(employeeNo+1);
//
//        cout << "employee created with value " << employeeNo+1 << '\n';
//        if(employee[superiorValue-1] != -1)
//            insertNode(root, thisEmployeeNode, superiorValue);
//        else
//            insertNode(thisEmployeeNode, root);
//    }
//    cout << getHeight(root)-1 << '\n';


    return 0;
}
