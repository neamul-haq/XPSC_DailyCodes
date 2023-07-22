/*
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
    ll n,ans=INT_MAX; cin >> n;
    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ans=min(ans,abs(a[0]-a[1]));
    ans=min(ans,abs(a[n-2]-a[n-1]));

    for(int i=1; i<n-1; i++)
    {
        ans=min(ans,max(abs(a[i]-a[i-1]),abs(a[i]-a[i+1])));
    }
    cout << ans << ndl;
}