#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n,k,l,ans=0; cin >> n >> k >> l;
    vector<ll>a;
    while(n--)
    {
        ll u,v;
        cin >> u >> v;
        if(v==l){
            a.push_back(u);
        }
    }
    sort(all(a),greater<int>());

    ll b = a.size();
    if(k>b){
        cout << -1 << "\n";
        return;
    }
    for(int i=0; i<min(b,k) ; i++)
    {
        ans+=a[i];
    }
    if(ans!=0) cout << ans << "\n";
    else cout << -1 << "\n";
}
