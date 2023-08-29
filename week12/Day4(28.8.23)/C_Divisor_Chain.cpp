/*
AUTHOR: Neyamul_Haq
CREATED: 28-08-2023  22:02:13
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
#define pb push_back
bool bit(int mask, int pos) {
    return (mask >> pos) & 1;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int tt;
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        int p;
        vector<int> ans;
        ans.pb(x);
        for (int i = 0; ; ++i) {
            if (bit(x, i)) {
                if (x == (1 << i)) {
                    p = i;
                    break;
                }
                x -= (1 << i);
                ans.pb(x);
            }
        }
        while (p > 0) {
            x -= (1 << (p - 1));
            ans.pb(x);
            --p;
        }
        cout << sz(ans) << "\n";
        for (int y : ans) {
            cout << y << " ";
        }
        cout << "\n";
    }

}