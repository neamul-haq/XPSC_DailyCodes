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
    ll n,ans=0; cin >> n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(is_sorted(all(a))){
        cout << 0 << ndl;
        return;
    }
    bool ck=false;
    ll indx;
    for(ll i=n-1; i>0; i--){
        if(ck && a[i]<a[i-1]){
            indx=i;
            break;
        }
        if(a[i]>a[i-1]){
            ck=true;
        }
    }
    cout << indx << ndl;
}