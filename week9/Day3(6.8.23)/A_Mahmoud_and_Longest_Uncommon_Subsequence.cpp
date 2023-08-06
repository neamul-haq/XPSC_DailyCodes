/*
AUTHOR: Neyamul_Haq
CREATED: 06-08-2023  23:39:27
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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    string a,b;
    cin >> a >> b;
    int ans=0;
    int res=0;
    if(a.size()<b.size()){
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!=b[i])
            {
                ans++;
            }
            else{
                res=max(res,ans);
                ans=0;
            }
        }
        res=max(res,ans);
        ans=0;
    }
    else{
        for(int i=0; i<b.size(); i++)
        {
            if(a[i]!=b[i])
            {
                ans++;
            }
            else{
                res=max(res,ans);
                ans=0;
            }
        }
        res=max(res,ans);
        ans=0;
    }
    int n=a.size();
    int m=b.size();
    res+=abs(n-m);
    if(a==b) res=-1;
    cout << res << ndl;
}