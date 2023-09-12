#include <iostream>
#include<cmath>
using namespace std;
int isprime(int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        long long int x;
        cin >> x;
        long long int m = sqrt(x);
        if(m*m==x && isprime(m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}