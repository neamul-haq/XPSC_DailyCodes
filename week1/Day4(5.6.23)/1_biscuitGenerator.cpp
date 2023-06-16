#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1;
    while(t--) solve();
}

void solve(){
    ll a,b,c,ans=0; cin >> a >> b >> c;
    ll cnt = c/a;
    ans = cnt*b;

    cout << ans << ndl;
}
