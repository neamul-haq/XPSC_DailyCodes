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

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k,i,j;
        cin>>n>>m;
        ll a[n+2],cnt[m+5],pre[m+5],sc[m+5];
        for(i=0; i<=m+1; i++) cnt[i]=-1, pre[i]=0, sc[i]=0;
 
        for(i=1; i<=n; i++){
            cin>>a[i];
            if(cnt[a[i]] <= i-pre[a[i]]-1){
                sc[a[i]] = cnt[a[i]];
                cnt[a[i]] = i-pre[a[i]]-1;
            }else{
                sc[a[i]] = max(sc[a[i]],i-pre[a[i]]-1);
            }
            pre[a[i]] = i;
        }
        for(i=1; i<=m; i++){
            if(cnt[i] <= n-pre[i]){
                sc[i] = cnt[i];
                cnt[i] = n-pre[i];
            }else{
                sc[i] = max(sc[i],n-pre[i]);
            }
        }
 
        ll ans = n;
        for(i=1; i<=m; i++){
            if(cnt[i] != -1){
                ll x = n;
                if(cnt[i]%2) x=min(x,(cnt[i]-1)/2);
                else x = min(x,(cnt[i]/2));
                x=max(x,sc[i]);
                ans=min(ans,x);
            }
        }
        
        cout<<ans<<endl;
    }
}