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
    ll t=1;
    while(t--) solve();
}

void solve(){
    ll n,ans=0; cin >> n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    for(int i=0; i<n; i+=2)
    {
        ans+=(a[i+1]-a[i]);
    }
    print
}