/*
AUTHOR: Neyamul_Haq
CREATED: 09-09-2023  09:46:53
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a/gcd(a,b))*b;
}

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,x,y,ans=0; cin >> n >> x >> y;
    if(x==y){
        cout << 0 << ndl;
        return;
    }
    ll dvx=n/x;
    ll dvy=n/y;
    ll both=n/lcm(x,y);
    debug(dvx,dvy,both);
    dvx-=both;
    dvy-=both;
    if(dvx>1) ans=(dvx*(2*(n-dvx+1)+(dvx-1)))/2;
    else if(dvx==1) ans=n;
    else ans=0;
    debug(ans);
    if(dvy>0) ans-=((dvy*(dvy+1))/2);
    print
}