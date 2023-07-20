/*
*/
#include <bits/stdc++.h>
using namespace std;
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
    ll n; cin >> n;
    ll arr[n];
    for (auto &u : arr) cin >> u;

    vector<ll> v;
    for (ll i = 0; i < n; i++) {
        v.push_back(arr[i]);
        while (i < n-1 and arr[i] == arr[i+1]) i++;
    }

    unordered_map<ll, ll> cnt;
    for (auto &u : v) cnt[u]++;

    cnt[v[0]] --;
    cnt[v.back()]--;

    ll ans = INT_MAX;
    for (auto &u : cnt) ans = min(ans, u.second);

    cout << ans+1 << endl;
}