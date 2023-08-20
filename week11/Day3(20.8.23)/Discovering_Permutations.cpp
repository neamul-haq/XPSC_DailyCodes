/*
AUTHOR: Neyamul_Haq
CREATED: 20-08-2023  10:41:36
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
    int tst=1;
int main()
{
    fast()
        ll t = 1;
    cin >> t;

    while (t--)
        solve();
}

void solve()
{
    int n,k; cin >> n >>k;
    string s="";
    int cnt=0;
    for(char c='A'; c<='Z'; c++){
        cnt++;
        s+=c;
        if(cnt==n) break;
    }
    cnt=0;

    cout << "Case " << tst << ":" << ndl;
    tst++;
    do
    {
        cnt++;
        cout << s << '\n';
        if(cnt==k) break;
    } while (next_permutation(s.begin(), s.end()));
}