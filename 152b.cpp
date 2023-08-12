#include <bits/stdc++.h>
using namespace std;
int main(){
    int64_t n, m, k, xc, yc, steps = 0;

    cin >> n >> m;

    cin >> xc >> yc;

    cin >> k;

    for(int i=0; i<k; i++){
        int64_t dx, dy;
        cin >> dx >> dy;


        // Steps in x-direction

        int64_t stepsX;

        if(dx == 0){
            stepsX = INT_MAX;
        }
        else if(dx > 0){
            stepsX = (n-xc)/dx;
        }
        else{
            stepsX = (xc-1)/abs(dx);
        }

//        cout << "Steps in x-direction: " << stepsX << '\n';

        // Steps in y-direction

        int64_t stepsY;

        if(dy == 0){
            stepsY = INT_MAX;
        }
        else if(dy > 0){
            stepsY = (m-yc)/dy;
        }
        else{
            stepsY = (yc-1)/abs(dy);
        }

//        cout << "Steps in y-direction: " << stepsY << '\n';


        if(stepsX < stepsY){
            steps += stepsX;
            xc += stepsX*dx;
            yc += stepsX*dy;
        }
        else{
            steps += stepsY;
            xc += stepsY*dx;
            yc += stepsY*dy;
        }
//        cout << "Total Steps: " << steps << "\nCurrent Cordinates: " << xc << ' ' << yc << '\n';
    }

    cout << steps << '\n';


    return 0;
}
