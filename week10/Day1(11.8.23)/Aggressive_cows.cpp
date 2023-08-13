/*
AUTHOR: Neyamul_Haq
CREATED: 13-08-2023  21:21:02
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
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,m,ans=0; cin >> n >> m;
    vector<int>a(n);
    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mx=max(mx,a[i]);
    }
    sort(all(a));
    int l=1,r=mx;
    while(l<=r){
        int mid=l+(r-l)/2;
        int curr=a[0];
        int cnt=1;
        for(int i=1; i<n; i++){
            if((a[i]-curr)>=mid){
                cnt++;
                if(i!=n-1) curr=a[i];
            }
        }
        //cout << mid << " " << cnt << ndl;
        if(cnt>=m){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    print
}