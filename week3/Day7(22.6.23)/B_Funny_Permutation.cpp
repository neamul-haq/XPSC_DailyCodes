#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        if(n==3){
            cout << -1 << endl;
            continue;
        }
        int j=n;
        for(int i=0; i<n; i++){
            a[i]=j;
            j--;
        }
        if(n%2!=0 and n!=5) swap(a[n/2],a[(n/2)+1]);
        else if(n%2!=0 and n==5) swap(a[n/2],a[(n/2)+2]);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}