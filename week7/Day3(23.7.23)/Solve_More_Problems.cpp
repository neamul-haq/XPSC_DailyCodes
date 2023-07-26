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
    ll n,k,ans=0,ans2=0; cin >> n >>k;
    vector<int>a(n);
    vector<int>b(n);
    int mn=INT_MAX,mnb=INT_MIN;
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<=mn)
        {
            mn=min(mn,a[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        m[a[i]+b[i]]=b[i]*-1;
    }
    for(auto it:m)
    {
        if((it.first+it.second)==mn){
            mnb=(it.second*-1);
        }
    }

    int temp=k;
    for(auto it:m)
    {
        if(temp>=it.first){
            ans++;
            temp-=it.first;
        }
        else{
            if(temp>=(it.first+it.second)){
                ans++;
            }
            break;
        }
    }
    temp=k;
    bool ck=true;
    for(auto it:m)
    {
        if(it.first==(mn+mnb) && ck){
            ck=false;
            continue;
        }
        if(temp>=it.first){
            ans2++;
            temp-=it.first;
        }
        else{
            if(temp>=mn) ans2++;
            break;
        }
    }
    
    cout << max(ans,ans2) << ndl;

}