/*
AUTHOR: Neyamul_Haq
CREATED: 10-08-2023  17:50:35
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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    int n,ans=INT_MIN; cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    mp
    map<int,int>m2;
    f(i,n){
        cin >> a[i];
        m[a[i]]=i;
    }
    f(j,n){
        cin >> b[j];
        m2[b[j]]=j;
    }
    vector<int>
    for(int i=1; i<=n; i++){
        int dif=abs(m[i]-m2[i]);
        dif=min(dif,n-dif);
        cout << dif << " ";
    }


}