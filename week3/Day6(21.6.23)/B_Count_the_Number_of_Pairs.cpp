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
    ll n,k,ans=0,ex=0; cin >> n >> k;
    string s; cin >> s;
    unordered_map<char,int>m;
    for(int i=0; i<n; i++)
    {
        m[s[i]]++;
    }

    for(char c='a'; c<='z'; c++)
    {
        int mn=min(m[c],m[c-32]);
        ans+=mn;
        ex+=(((max(m[c],m[c-32])-mn)/2)*2);
    }
    ex/=2;

    ans+=min(ex,k);
    print

}