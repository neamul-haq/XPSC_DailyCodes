/*
Neamul Haq
University of Barisal.
*/
#include<bits/stdc++.h>
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
    ll s,t,ans=0; cin >> s >> t;
    for(int i=0; i<=100; i++)
    {
        for(int j=0; j<=100; j++)
        {
            for(int k=0; k<=100; k++)
            {
                if(i+j+k<=s && i*j*k<=t) ans++;
            }
        }
    }
    cout << ans << ndl;

}
