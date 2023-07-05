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
    ll n,k,ans=-1; cin >> n >> k;
    if(n<=k){
        cout << 1 << ndl;
        return;
    }
    if(k==1){
        cout << n << ndl;
        return;
    }

    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            ll val = n/i;
            if((n/val)<=k ) ans=max({ans,i});
            if((n/i)<=k ) ans=max({ans,val});
        }
    }
    if(ans!=-1){
        cout << n/ans << ndl;
    } 
    else cout << n << ndl;
}