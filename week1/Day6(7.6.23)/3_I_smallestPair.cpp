#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,c,ans=INT_MAX; cin >> n;

    vector<ll>a(n);
    for(auto &u: a) cin >> u;

    ll suffix[n],prefix[n];

    prefix[0] = a[0] -1;

    for(int i=1; i<n; i++)
    {
        prefix[i] = min(prefix[i-1], a[i]-(i+1));
    }

    suffix[n-1] = a[n-1]+n;

    for(int i=n-2; i>=0; i--)
    {
        suffix[i] = min(suffix[i+1], a[i]+i+1);
    }

    for(int i=0; i<n-1; i++)
    {
        ans = min(ans, prefix[i]+suffix[i+1]);
    }
    cout << ans << ndl;

}
