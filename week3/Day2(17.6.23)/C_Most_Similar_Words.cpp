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
    ll n,m,ans=INT_MAX; cin >> n >> m;

    string ar[n+1];

    for(int i=0; i<n; i++)
    {
        string st;
        cin >> st;
        ar[i]=st;
    }
    string s,s2;
    for(int i=0; i<n-1; i++)
    {
        ll cost=0;
        s=ar[i];
        for(int k=i+1; k<n; k++)
        {
            s2=ar[k];
            for(int j=0; j<m; j++)
            {
                cost+=abs(s2[j]-s[j]);
            }
            ans = min(ans,cost);
            cost=0;
        }
    }
    cout << ans << ndl;

}