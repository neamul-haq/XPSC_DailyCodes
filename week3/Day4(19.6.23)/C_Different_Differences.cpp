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
    ll n,k,in=1; cin >> k >> n;
    if(n==k)
    {
        for(int i=1; i<=k; i++)
        {
            cout << i << " ";
        }
        cout << ndl;
        return;
    }
    for(int i=0; i<k; i++)
    {
        if(n-in-i+1<k-i){
            for(int j=i; j<k; j++)
            {
                in++;
                cout << in << " ";
            }
            break;
        }
        cout << in+i << " ";
        in=in+i;
        
    }
    cout << ndl;
}