/*
AUTHOR: Neyamul_Haq
CREATED: 28-08-2023  21:41:18
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,k; cin >> n >> k;
    string s; cin >> s;
    if(k%2==0){
        sort(all(s));
        cout << s << ndl;
    }
    else{
        string s2="";
        string s3="";
        for(int i=0; i<s.size(); i+=2){
            s2+=s[i];
        }
        for(int i=1; i<s.size(); i+=2){
            s3+=s[i];
        }
        sort(all(s2));
        sort(all(s3));
        string ans="";
        for (int i = 0, j = 0; i < sz(s2) || j < sz(s3); ++i, ++j) {
            if (i < sz(s2)) {
                ans += s2[i];
            }
            if (j < sz(s3)) {
                ans += s3[i];
            }
        }
        cout << ans << ndl;
    }
}