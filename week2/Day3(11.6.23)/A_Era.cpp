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
    int t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,ans=0,mx=1; cin >> n;

    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll j=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]>mx && a[i]>j+1){
            ans+=(a[i]-mx-1);
            j+=(a[i]-mx-1);
            if(i==0){
                ans++;
                j=a[i]-1;
            } 
            mx = (a[i],j+1);
        } 
        else {
            mx = max({mx, a[i],j+1});
        }
        j++;
    }

    cout << ans << ndl;
}