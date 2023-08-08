/* 
AUTHOR: Neyamul_Haq
CREATED: 07-08-2023  13:34:10
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
    int n,m,k; cin >> n >> m >> k;
    int mx=INT_MIN;
    unordered_map<int,int>um;
    vector<int>a(m);
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
        mx=max(mx,a[i]);
        um[a[i]]++;
    }
    if(n%k==0){
        if(mx<=n/k){
            cyes
        }
        else{
            cno
        }
    }
    else{
        if(mx<=(n/k)+1 && um[(n/k)+1]<=n%k){
            cyes
        }
        else cno
    }
}