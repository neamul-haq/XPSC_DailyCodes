/*
AUTHOR: Neyamul_Haq
CREATED: 07-08-2023  01:42:40
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
const ll N = 1e6;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
vector<int>vec;
int n,x,p;
void possible()
{
    int y=1;
    vec.push_back(y);
    for(int i=2; i<=min(2*n,p); i++){
        y+=i;
        y=y%n;
        vec.push_back(y);
    }
}
int main()
{
    fast()
    
    ll t=1; cin >> t;
    while(t--){
        solve();
    } 
}

void solve(){
    vec.clear();
    cin >> n >> x >> p;
    possible();
     
    int v=(n-x)%n;
    int cnt=1;
    if(x==0){
        for(auto i:vec)
        {
        if(cnt>p) break;
        if(i%n==0)
        {
            cyes
            return;
        }
        cnt++;
        }
    }
    else{
        for(auto i:vec)
        {
        if(cnt>p) break;
        if(i%n==v)
        {
            cyes
            return;
        }
        cnt++;
        }
    }
    cno
}