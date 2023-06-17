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
    char m[10][10];

    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            cin >> m[i][j];
        }
    }

    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
        {
            if(m[i][j]=='#' && m[i-1][j-1]=='#' && m[i-1][j+1]=='#' && m[i+1][j-1]=='#' && m[i+1][j+1]=='#'){
                cout << i << " " << j << ndl;
                return;
            }
        }
    }


}