#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t; cin >> t;
    while(t--) solve();
}

void solve(){
    double n,m; cin >> n >> m;
    n = n - (n*.1);
    if(n<m) cout << "ONLINE" << '\n';
    else if(n==m) cout << "EITHER" << '\n';
    else cout << "DINING" << '\n';

}