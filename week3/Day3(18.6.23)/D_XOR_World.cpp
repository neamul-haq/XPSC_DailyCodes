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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,m; cin >> n >> m;
    ll a,b;
    if((n-1)%4==0){
        a=n-1;
    }
    else if((n-1)%4==1){
        a=1;
    }
    else if((n-1)%4==2){
        a=n;
    }
    else{
        a=0;
    }
    if(n==0) a=0;

    if((m)%4==0){
        b=m;
    }
    else if((m)%4==1){
        b=1;
    }
    else if((m)%4==2){
        b=m+1;
    }
    else{
        b=0;
    }

    cout << (a ^ b) << ndl;

}