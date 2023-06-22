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
#define umap unordered_map<string,ll>m;
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
    ll n,ans=0; cin >> n;
    string a[n];
    umap
    for(ll i=0; i<n; i++)
    {
        string s;
        cin >> s;
        a[i]=s;
        m[s]++;
    }

    for(ll i=0; i<n; i++)
    {
        string s = a[i];
        string s2 = a[i];
        string s3 = a[i];
        for(char c='a'; c<='k'; c++)
        {
            s[0]=c;
            if(s==s3) continue;
            if(m[s]>0){
                ans+=m[s];
            } 
        }
        for(char c='a'; c<='k'; c++)
        {
            s2[1]=c;
            if(s2==s3) continue;
            if(m[s2]>0){
                ans+=m[s2];
            } 
        }
    }
    ans/=2;
    print

}