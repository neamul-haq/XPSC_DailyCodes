/*
AUTHOR: Neyamul_Haq
CREATED: 12-08-2023  20:00:43
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
    fast()
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,m,ans=0; cin >> n >>m;
    vector<int>a(n);
    f(i,n){
        cin >> a[i];
    }

    ll l=0,r=LLONG_MAX;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll s=0;
        for(int i=0; i<n; i++){
            if((a[i]-mid)>0) s+=(a[i]-mid);
        }
        if(s==m){
            ans=mid;
            break;
        }
        else if(s>m){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    print

}