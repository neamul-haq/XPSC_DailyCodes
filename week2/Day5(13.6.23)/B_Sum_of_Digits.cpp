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
ll ans=0;
int main()
{
    fast()
    ll t=1; 
    while(t--) solve();
}

void answer(string s)
{
    if(s.size()==1) return;
    ans++;
    ll sum=0;
    for(ll i=0; i<s.size(); i++)
    {
        char c = s[i];
        sum+=(c-'0'); 
    }
    string s2 = to_string(sum);
    answer(s2);
}

void solve(){
    string s; cin >> s;
    answer(s);
    cout << ans << ndl;
}