/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n,k; cin >> n >>k;
    vector<pair<ll,ll>>a;
    vector<ll>b(n);
    for(int i=0; i<n; i++)
    {
        ll in;
        cin >> in;
        a.push_back(make_pair(in,i));
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    vector<ll>ans(n);

    for(ll i=0; i<n; i++)
    {
        pair<ll,ll>p=a[i];
        ans[p.second]=b[i];
    }
    for(auto v:ans)
    {
        cout << v << " ";
    }
    cout << ndl;
}