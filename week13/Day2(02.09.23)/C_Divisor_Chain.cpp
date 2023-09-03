/*
AUTHOR: Neyamul_Haq
CREATED: 02-09-2023  12:23:39
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
    int x;
    cin>>x; //14
    vector<int>ans;

    int now = 1;
    while(now <= x)
    {
        ans.push_back(now);
        now*=2;
    }

    if(ans.back()!=x)
    {
        int diff = x - ans.back(); 
        for(int i=30;i>=0;i--)
        {
            if(diff&(1<<i))
            {
                ans.push_back(ans.back() + (1<<i)); 
            }
        }
    }
    reverse(ans.begin(),ans.end());

    cout<<ans.size()<<"\n";
    for(int i:ans)
        cout<<i<<" ";
    cout<<"\n";
}