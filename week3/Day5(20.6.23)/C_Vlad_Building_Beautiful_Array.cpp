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
    ll n,mn=INT_MAX; cin >> n;
    bool ans=true;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        mn=min(mn,a[i]);
    }

    if(mn%2==0)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==1){
                ans=false;
                break;
            } 
        }
    }

    if(ans){
        cyes
    } 
    else{
        cno
    } 
}