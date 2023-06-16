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
    ll s,k,ans=0; cin >> k >> s;
    vector<ll>z;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(s-(i+j)>=0) z.push_back(s-(i+j));
        }
    }
    for(auto v:z) if(v<=k) ans++;
    cout << ans << ndl;

}