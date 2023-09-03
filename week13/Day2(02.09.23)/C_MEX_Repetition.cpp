/*
AUTHOR: Neyamul_Haq
CREATED: 02-09-2023  12:21:11
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
     int n,k;
    cin>>n>>k;
    k%=(n+1); // k [0 .. n]
    vector<int>a(n);
    vector<bool>vis(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        vis[a[i]] = 1;
    }

    int nai = -1;
    for(int i=0; i<=n; i++)
        if(vis[i]==0)
            nai = i;

    deque<int> dq(a.begin(),a.end());

    for(int i=0; i<k; i++)
    {
        //dq = [1,2,3,4,5]
        // nai = 0

        int val = nai;
        // dq = [0,1,2,3,4,5]
        dq.push_front(val); // O(1)
        // nai = 5
        nai = dq.back();
        // dq = [0,1,2,3,4]
        dq.pop_back();
    }

    for(int i=0;i<dq.size();i++)
        cout<<dq[i]<<" ";
    cout<<"\n";


}