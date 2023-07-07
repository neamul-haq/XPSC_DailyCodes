/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
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
    ll n,l,r; cin >> n >> l >> r;
    ll ans=0;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    for(ll i=0; i<n; i++)
    {
        ll val=a[i];
            ll idxL=lower_bound(a.begin()+i+1,a.end(),l-val)-a.begin();
            ll idxR=upper_bound(a.begin()+i+1,a.end(),r-val)-a.begin();
            if(idxR-idxL>0){
                ans+=(idxR-idxL);
            }
    }
    cout << ans << ndl;
}