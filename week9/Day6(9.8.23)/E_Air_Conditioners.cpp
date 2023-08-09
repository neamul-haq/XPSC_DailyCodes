/*
AUTHOR: Neyamul_Haq
CREATED: 09-08-2023  15:32:54
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
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
    ll n,k,ans=0; cin >> n >> k;
    vector<ll>a(k);
    vector<ll>b(k);
    vector<ll>l(n,INT_MAX);
    vector<ll>r(n,INT_MAX);
    for(ll i=0; i<k; i++){
        cin >> a[i];
    }
    for(ll i=0; i<k; i++){
        cin >> b[i];
        l[a[i]-1]=b[i];
        r[a[i]-1]=b[i];
    }
    
    ll p=INT_MAX;
    for(ll i=0; i<n; i++){
        p=min(p+1,l[i]);
        l[i]=p;
    }
    // for(auto u:l){
    //     cout << u << ndl;
    // }
    p=INT_MAX;
    for(int i=n-1; i>=0; i--){
        p=min(p+1,r[i]);
        r[i]=p;
    }
    for(int i=0; i<n; i++){
        cout << min(l[i],r[i]) << " ";
    }
    cout << ndl;
}