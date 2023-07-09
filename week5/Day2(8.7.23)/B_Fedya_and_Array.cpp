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
    ll x,y; cin >> x >> y;
    vector<ll>a;
    for(int i=x; i>=y; i--)
    {
        a.push_back(i);
    }
    for(int i=y+1; i<=x-1; i++)
    {
        a.push_back(i);
    }
    cout << a.size() << ndl;
    for(auto u:a) cout << u << " ";
    cout << ndl;

}