/*
AUTHOR: Neyamul_Haq
CREATED: 18-08-2023  12:08:42
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
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
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    
    #ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,k,ans=1; cin >> n >> k;

    for(int i=0; i<k; i++){
        ans*=n;
        ans%=mod;
    }
    //debug(n);
    print
}