#include <bits/stdc++.h>
using namespace std;

int calcs(int a, int n, int p){
	int res = 1;
	a = a % p;
	while (n > 0){
		if (n & 1)
			res = (res*a) % p;
		n = n>>1;
		a = (a*a) % p;
	}
	return res;
}

int gcd(int a, int b){
	if(a < b)
		return gcd(b, a);
	else if(a%b == 0)
		return b;
	else return gcd(b, a%b);
}
bool isPrime(int n, int k){
    if (n <= 1 || n == 4) return false;
    if (n <= 3) return true;
    while (k > 0){
        int a = 2 + rand()%(n-4);
        if (gcd(n, a) != 1)
            return false;
        if (calcs(a, n-1, n) != 1)
		return false;
        k--;
    }
    return true;
}

int main(){
    int n, i, n1;
    cin >> n;
    n1 = n;
    if(isPrime(n,4)){
        cout << 1 << "\n" << n;
        exit(0);
    }
    i = n-1;
    while(!isPrime(i,4))
        i--;
    n -= i;
    if(isPrime(n,4)){
        cout << 2 << "\n" << i << " " << n;
        exit(0);
    }
    int j, k = 0, l, prmNum[100001];
    for(j=2; 2*j <= n; j++){
        if(isPrime(j,4)){
            if(n/(j*1.0) == 2){
                cout << 3 << "\n" << i << " " << j << " " << j;
                exit(0);
            }
            prmNum[k] = j;
            k++;
        }
    }
    prmNum[k] = j;
    for(j=0; j<=k; j++)
        cout << prmNum[j] << " ";
//    for(j=0; j<=k; j++)
//        for(l=j+1; l<=k; l++)
//            if(prmNum[j] + prmNum[l] == n){
//                cout << 3 << "\n" << i << " " << prmNum[j] << " " << prmNum[l];
//                exit(0);
//            }
    return 0;
}
