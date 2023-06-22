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
    ll n,ans=1; cin >> n;
    string s; cin >> s;
    unordered_map<string,ll>m;
    string s2="";
    s2+=s[0];
    s2+=s[1];
    m[s2]++;
    for(int i=1; i<n-1; i++)
    {
        char c=s[i];
        char c2=s[i+1];
        s2="";
        s2+=c;
        s2+=c2;
        if(m[s2]==0) ans++;
        m[s2]++;
    }
    print
}