/*
AUTHOR: Neyamul_Haq
CREATED: 14-08-2023  01:29:00
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
ll power(ll base,ll n)
{
	ll result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%mod;
			n--;
		}
		else {
			base=(base*base)%mod;
			n/=2;
		}
	}
	return result%mod;
}
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
    ll n, k;
    cin >> n >> k;
    string v;
    // while (k)
    // {
    //     if (k % 2 == 0)
    //         v += '0';
    //     else
    //         v += '1';
    //     k /= 2;
    // }
    // ll ans = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == '1')
    //         ans += power(n, i);
    //     ans %= mod;
    // }
    ll j=1,ans=0;
    while(k){
        if(k%2==1){
            ans=(ans+j)%mod;
        }
        k/=2;
        j=(j*n)%mod;
    }
    cout << ans << endl;
}