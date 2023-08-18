#include <bits/stdc++.h>
#define ll long long
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;
int main() {
    fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        for(int i=1; i<n; i++){
            ar[i] = ar[i-1]&ar[i];
        }
        cout << ar[n-1] << endl;
    }
}