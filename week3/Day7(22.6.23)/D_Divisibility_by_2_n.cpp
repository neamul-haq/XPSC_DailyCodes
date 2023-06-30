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
    ll n,ans=0; cin >> n;
     ll res = 0;
        vector<ll>v;

        for(ll i=1; i<=n; i++) {
            ll x; cin>>x;

            while(x%2 == 0) {
                res++;
                x /= 2;
            }

            ll cur = i;
            ll temp = 0;
            while(cur%2 == 0) {
                temp++;
                cur /= 2;

            }
            v.push_back(temp);
        }

        sort(v.rbegin(), v.rend());

        if(res>=n) cout<<0<<endl;
        else {
            ll ans = 0;
            for(int i=0; i<v.size(); i++) {
                res += v[i];
                ans++;
                if(res>=n) {
                    cout<<ans<<endl;
                    break;
                }
            }
            if(res<n) cout<<-1<<endl;
        }

}