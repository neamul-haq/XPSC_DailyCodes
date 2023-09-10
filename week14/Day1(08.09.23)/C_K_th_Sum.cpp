/*
AUTHOR: Neyamul_Haq
CREATED: 09-09-2023  12:34:00
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

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,k,ans=0; cin >> n >> k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    sort(all(b));
    ll l=1,r=LLONG_MAX;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll cnt=0;
        for(int i=0; i<n; i++){
            ll val=mid-a[i];
            cnt+=(upper_bound(all(b),val)-b.begin());
        }
        if(cnt>=k){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    print
}