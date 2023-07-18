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
    string s; cin >> s;
    int f1=s[0]-'0';
    int f2=s[1]-'0';
    int first=(f1*10)+f2;
    int s1=s[3]-'0';
    int s2=s[4]-'0';
    int second=(s1*10)+s2;
    if(first<=12 && second<=12){
        cout << "BOTH" << ndl;
    }
    else if(first<=12 && second>12){
        cout << "MM/DD/YYYY" << ndl;
    }
    else{
        cout << "DD/MM/YYYY" << ndl;
    }
}