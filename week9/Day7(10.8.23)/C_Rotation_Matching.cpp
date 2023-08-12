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
    int n,ans=0; cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    mp
    map<int,int>m2;
    f(i,n){
        cin >> a[i];
        m[a[i]]=i;
    }
    m[a[0]]=n;
    //a.push_back(a[0]);
    f(j,n){
        cin >> b[j];
        m2[b[j]]=j;
    }
    map<int,int>mxdif;
    for(int i=1; i<=n; i++){
        int dif=(m[i]-m2[i]);
        //dif=min(dif,n-dif);
        if(dif<0) dif+=n;
         mxdif[dif]++;
        //cout << dif << " ";
    }
    cout << ndl;
    int rot=-1,val=-1;
    for(auto it:mxdif){
        if(it.second>val){
            rot=it.first;
            val=it.second;
            //cout << it.first << " " << it.second << ndl;
        } 
    }
    //cout << rot << ndl;
    for(int i=0; i<n; i++){
        int dis=i+rot;
        if(dis>=n) dis=dis%n;
        if(b[i]==a[dis]) ans++;
    }
    print
}