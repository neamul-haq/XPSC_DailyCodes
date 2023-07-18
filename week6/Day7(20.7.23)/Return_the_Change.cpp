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
    ll n,i,j,k,ans=0; cin >> n;
    if(n%10>=5) ans = 100 - ((n/10)*10) - 10;
    else ans = 100 - ((n/10)*10);
    cout << ans << '\n';
}