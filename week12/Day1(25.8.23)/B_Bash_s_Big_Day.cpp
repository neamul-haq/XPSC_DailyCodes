/*
AUTHOR: Neyamul_Haq
CREATED: 25-08-2023  23:19:46
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
#define f(i, n) for (int i = 0; i < n; i++)
#define ump unordered_map<int, int> um;
#define mp map<int, int> m;
int const mod = 1e9 + 7;
const ll inf = 1e18;
const ll N = 1e3;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
        ll t = 1;
    while (t--)
        solve();
}

void solve()
{
    int n, ans = 1;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> m;
    f(i, n)
    {
        cin >> a[i];
        m[a[i]]++;
        if (a[i] != 1)
            ans = max(ans, m[a[i]]);
    }
    if (n == 1)
    {
        cout << 1 << ndl;
        return;
    }

    f(i, n)
    {
        for(int j=2; j*j<=a[i]; j++){
            if(a[i]%j==0){
                m[j]++;
                ans = max(ans, m[j]);
                if(a[i]/j!=j){
                    m[a[i]/j]++;
                    ans = max(ans, m[a[i]/j]);
                }
            }
        }
    }
    print
}
