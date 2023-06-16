/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define minus cout << -1 << '\n'
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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,ans=0,mn=INT_MAX; cin >> n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans+=a[i];
        if(a[i]%2) mn = min(mn, a[i]);
    }
    if(ans%2==0) cout << ans << ndl;
    else cout << ans -mn << ndl;
}