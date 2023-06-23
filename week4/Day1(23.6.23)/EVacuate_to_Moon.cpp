/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll,ll>m;
#define map map<ll,ll>m;
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
    ll n,m,h,ans=0; cin >> n >> m >> h;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin >> b[i];
    }
    sort(all(a),greater<ll>());
    sort(all(b),greater<ll>());
    ll total=0;

    for(ll i=0; i<min(n,m); i++)
    {
        total+=min(a[i],b[i]*h);
    }
    cout << total << ndl;

}