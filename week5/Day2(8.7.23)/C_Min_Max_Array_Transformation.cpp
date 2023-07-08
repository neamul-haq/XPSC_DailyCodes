/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
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
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>c(n);
    vector<ll>d(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for(int i=0; i<n; i++)
    {
        int mn=lower_bound(all(b),a[i])-b.begin();
        c[i]=b[mn]-a[i];
    }
    int i;
    for(i=n-1; i>=0; i--)
    {
        int indx=lower_bound(all(b),a[i])-b.begin();
        if(indx==i){
            d[i]=b[i]-a[i];
        }
        else break;
    }
    int ind=n-1;
        for(int i=n-1;i>=0;i--)
        {
            d[i]=(b[ind]-a[i]);
            if(a[i]>b[i-1])ind=i-1;
        }
    for(auto u:c) cout << u << " ";
    cout << ndl;
    for(auto u:d) cout << u << " ";
    cout << ndl;
}