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
    ll x,y,ans; cin >> x >> y;
    float c4,c2;
    c4 = y/4.0;
    c2 = x/2.0;
    if(c4<c2) ans = y*2 + x;
    else ans = 5*x;
    cout << ans << '\n';
}