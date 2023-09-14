/*
AUTHOR: Neyamul_Haq
CREATED: 14-09-2023  12:26:32
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
#define f(strt,end) for(int i=strt; i<=end; i++)
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
    ll k,n,ans=0; cin >> k >> n;
    vector<int>a(n);
    f(0,n-1){
        cin >> a[i];
    }
    ll l=1,r=LLONG_MAX;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll s=0;
        f(0,n-1){
            if(a[i]>mid){
                s+=mid;
            }
            else{
                s+=a[i];
            }
        }
        ll coun=s/k;
        if(coun>=mid){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    print
}