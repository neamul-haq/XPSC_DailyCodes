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
    ll n,m,ans=0,mx=INT_MIN; cin >> n >> m;
    ll mt[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> mt[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ll r=i,c=j;
            ll sr=i,sc=j;
            while(r!=-1 and c!=-1)
            {
                ans+=mt[r][c];
                r--;
                c--;
            }
            r=sr+1;
            c=sc+1;
            while(r!=n and c!=m)
            {
                ans+=mt[r][c];
                r++;
                c++;
            }
            r=sr+1;
            c=sc-1;
            while(r!=n and c!=-1)
            {
                ans+=mt[r][c];
                r++;
                c--;
            }
            r=sr-1;
            c=sc+1;
            while(r!=-1 and c!=m)
            {
                ans+=mt[r][c];
                r--;
                c++;
            }
            mx = max(ans,mx);
            ans=0;
        }
    }
    cout << mx << ndl;

}