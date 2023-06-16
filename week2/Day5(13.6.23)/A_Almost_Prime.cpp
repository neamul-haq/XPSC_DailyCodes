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

const ll maxx=3e3+5;
bool prime[maxx];

void sieve()
{
    prime[1]=false;
    for(ll i=2; i<=maxx; i++)
    {
        prime[i]=true;
    }
    for(ll i=2; i*i<=maxx; i++)
    {
        if(prime[i]==true)
        {
            for(ll j=i*i; j<=maxx; j+=i){
                prime[j]=false;
            }
        }
    }
}

int main()
{
    fast()
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,ans=0; cin >> n;
    sieve();
    for(ll i=1; i<=n; i++)
    {
        ll prmDiv=0;
        for(ll j=1; j<=n; j++)
        {
            if(i%j==0 && prime[j]) prmDiv++;   
        }
        if(prmDiv==2) ans++;
    }
    cout << ans << ndl;

}