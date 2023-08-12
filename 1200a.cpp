#include <bits/stdc++.h>
using namespace std;

void addFront(int arr[]){
    for(int i=0; i<10; i++){
        if(arr[i] == 0){
            arr[i] = 1;
            return;
        }
    }
}

void addBack(int arr[]){
    for(int i=9; i>=0; i--){
        if(arr[i] == 0){
            arr[i] = 1;
            return;
        }
    }
}

void removeAtPosition(int arr[], int position){
    arr[position] = 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int hotelRooms[10] = {0};

    int n, i;
    string memory;
    cin >> n >> memory;

    for(i=0; memory[i]; i++){
        if(memory[i] == 'L')
            addFront(hotelRooms);
        else if(memory[i] == 'R')
            addBack(hotelRooms);
        else
            removeAtPosition(hotelRooms, memory[i]-'0');
    }

    for(i=0; i<10; i++){
        cout << hotelRooms[i];
    }
    cout << '\n';

    return 0;
}
