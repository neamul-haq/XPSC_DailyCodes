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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    int n,ans=0; cin >> n;
    vector<int>a(n);
    vector<int>b;
    b.push_back(1);
    while(b.back()<=1e9){
        b.push_back(2*b.back());
    }
    unordered_map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        bool flag=false;
        for(int j=0; j<b.size(); j++)
        {
            int search=b[j]-a[i];
            if(search<=0) continue;
            if(search==a[i]){
                if(m[search]>1){
                    flag=true;
                    break;
                }
            }
            else{
                if(m[search]>0) {
                    flag=true;
                    break;
                }
            }
        }
        if(!flag) ans++;
    }
    // for(auto u:b){
    //     cout << u << ndl;
    // }
    cout << ans << ndl;

}