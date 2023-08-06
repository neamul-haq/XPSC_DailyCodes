/*
AUTHOR: Neyamul_Haq
CREATED: 05-08-2023  20:28:48
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
#define ump unordered_map<int, int> mp;
#define mp map<int, int> mp;
int const mod = 1e9 + 7;
const ll inf = 1e18;
const ll N = 2e5+9;
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
    fast()
        ll t = 1;
    while (t--)
        solve();
}

void solve()
{
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    tuple<int,int,ll> ar[m];
    for (int i = 1; i <= m; i++)
    {
        int l,r;
        ll d;
        cin >> l >> r >> d;
        ar[i]=(make_tuple(l,r,d));
    }
    vector<ll> b(m + 3);
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        b[x]++;
        b[y + 1]--;
    }
    for (int i = 1; i <= b.size(); i++)
    {
        b[i] += b[i - 1];
    }
    
    for (int j = 1; j <= m; j++)
    {
        //ar[j] = make_tuple(get<0>(ar[j]),get<1>(ar[j]),get<2>(ar[j])*b[j]);
        get<2>(ar[j])*=b[j];
    }
    // for (auto u : b)
    // {
    //     cout << u << " ";
    // }
    // cout << ndl;
    // for(int i=1; i<=m; i++)
    // {
    //     for(int j=1; j<=3; j++)
    //     {
    //         cout << ar[i][j] << " " ;
    //     }
    //     cout << ndl;
    // }
    vector<ll> c(n + 3);
    for (int i = 1; i <= m; i++)
    {
        c[get<0>(ar[i])] += get<2>(ar[i]);
        c[get<1>(ar[i]) + 1] -= get<2>(ar[i]);
    }
    for (int i = 1; i <= c.size(); i++)
    {
        c[i] += c[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] += c[i];
    }
    reverse(all(a));
    a.pop_back();
    reverse(all(a));
    for (auto u : a)
    {
        cout << u << " ";
    }
    cout << ndl;
}