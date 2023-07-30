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
    ll n,ans=0; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout << 1 << ndl;
        return;
    }
    bool up=false;
    bool down=false;
    if(a[1]>a[0]){
        up=true;
    }
    if(a[1]<a[0]){
        down=true;
    }

    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1]){
            if(up){
                ans++;
            } 
            up=false;
            down=true;
        }
        else if(a[i]>a[i-1]){
            if(down){
                ans++;
            } 
            down=false;
            up=true;
        }
    }
    if(!up && !down)
    {
        cout << 1 << ndl;
        return;
    }

    cout << ans+2 << ndl;

}