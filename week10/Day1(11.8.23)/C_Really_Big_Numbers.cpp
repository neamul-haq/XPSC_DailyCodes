/*
AUTHOR: Neyamul_Haq
CREATED: 13-08-2023  14:01:11
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
 ll getSum(ll n){
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
int main()
{
    fast()
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll n,s,ans=0; cin >> n >> s;
    ll l=1;
    ll r=n;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=getSum(mid);
        sum=mid-sum;
        if(sum>=s){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        //cout << mid << " " << sum << ndl;
    }
    if(ans==0){
        cout << 0 << ndl;
        return;
    }
    ans=n-ans+1;
    print
}