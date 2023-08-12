#include <bits/stdc++.h>
using namespace std;

string s;
int steps = 0;

char flip(char c){
    if(c == '0')
        return '1';
    return '0';
}

void makeGood(int startIndex, int endIndex){
    if(startIndex >= endIndex)
        return;

    // Check first segment
    int i = startIndex;
    char c = s[i];
    for(i=startIndex+1; i<=endIndex; i++){
        if(s[i] != c)
            break;
    }

    if(i%2 != 0){   // Segment not even
        s[i] = flip(s[i]);
        steps++;

//        cout << "Index " << i << " Flipping\n";
        i++;
    }

    if(i > endIndex){
        return;
    }

    int secondSegmentBegin = i;

    // Check Last segment
    int cnt = 0;
    i = endIndex;
    c = s[i];
    for(--i; i>=startIndex; i--){
        cnt++;
        if(s[i] != c)
            break;
    }

//    cout << "cnt = " << cnt << '\n';

    if(cnt%2 != 0){   // Segment not even
        s[i] = flip(s[i]);
        steps++;
//        cout << "Index " << i << " Flipping\n";
    }

    // 1 entire segment
    if(i < startIndex){
        return;
    }

    int lastSegmentBegin = i;

//    cout << "steps = " << steps << '\n';
//    cout << "s = " << s << '\n';
//    cout << "secondSegBeg = " << secondSegmentBegin << " LastSegEnd = " << lastSegmentBegin-1 << '\n';
    makeGood(secondSegmentBegin, lastSegmentBegin-1);

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        cin >> s;

        steps = 0;

        makeGood(0, n-1);

        cout << steps << '\n';
    }

    return 0;
}
