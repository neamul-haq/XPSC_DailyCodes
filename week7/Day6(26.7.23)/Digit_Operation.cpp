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
    ll n,k,ans=0; cin >> n >> k;
    vector<string>a(n);
    vector<string>b(n);
    unordered_map<char,int>m;
    unordered_map<char,int>m2;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        for(int j=0; j<a[i].size(); j++)
        {
            m[a[i][j]]++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        for(int j=0; j<b[i].size(); j++)
        {
            m2[b[i][j]]++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i].size()!=b[i].size()){
            cno
            return;
        }
    }

    for(char c='0'; c<='9'; c++)
    {
        ans+=(abs(m[c]-m2[c]));
    }
    ans++;
    if((ans/2)<=k){
        cyes
    }
    else cno

}