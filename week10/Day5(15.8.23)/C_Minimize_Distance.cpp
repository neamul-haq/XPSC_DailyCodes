/*
AUTHOR: Neyamul_Haq
CREATED: 15-08-2023  12:28:15
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
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n,k; cin >> n >>k;
    vector<int>b(n);
    //vector<int>b;
    ll ans=0;
    f(i,n){
        cin >> b[i];
    }
    sort(all(b));
    //b.push_back(a[0]);
    // for(int i=1; i<n; i++){
    //     if(a[i]!=a[i-1]) b.push_back(a[i]);
    // }
    // for(auto u:b){
    //     cout << u << " ";
    // }
    // cout << ndl;
    vector<int>pos;
    vector<int>neg;
    f(i,b.size()){
        if(b[i]>=0) pos.push_back(b[i]);
        if(b[i]<0) neg.push_back(b[i]*-1);
    }
    sort(all(pos));
    n=pos.size();
    f(i,pos.size()){
        if(i<(n%k)){
            ans+=pos[n%k-1]*2;
            i+=n%k-1;
        }
        else{
            ans+=pos[i+k-1]*2;
            i+=k-1;
        }
    }
    // print
    // for(auto u:pos){
    //     cout << u << " ";
    // }
    // cout << ndl;
    sort(all(neg));
    n=neg.size();
    f(i,neg.size()){
        if(i<(n%k)){
            ans+=neg[n%k-1]*2;
            i+=n%k-1;
        }
        else{
            ans+=neg[i+k-1]*2;
            i+=k-1;
        }
    }
    //print
    // for(auto u:neg){
    //     cout << u << " ";
    // }
    // cout << ndl;
    if(pos.empty()) ans-=neg[neg.size()-1];
    else if(neg.empty()) ans-=pos[pos.size()-1];
    else ans-=max(pos[pos.size()-1],neg[neg.size()-1]);
    print
}