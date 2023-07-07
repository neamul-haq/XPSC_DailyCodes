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
    ll t=1;
    while(t--) solve();
}

void solve(){
    ll n,ans=0,mx=INT_MIN; cin >> n;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>c(n);
    vector<ll>d(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for(int i=0; i<n; i++)
    {
        c[i]=a[i]-b[i];
        d[i]=a[i]-b[i];
        mx=max(mx,d[i]);
    }
    sort(all(d));
    for(int i=0; i<n; i++)
    {
        ll idxL=lower_bound(d.begin(),d.end(),(c[i]-1)*-1)-d.begin();
            ll idxR=upper_bound(d.begin(),d.end(),mx)-d.begin();

            ans+=(idxR-idxL);

            if(c[i]>=(c[i]-1)*-1) ans--;
    }

    cout << ans/2 << ndl;
}