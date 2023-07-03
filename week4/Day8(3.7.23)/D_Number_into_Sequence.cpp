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
    ll num, k = 0, temp = n;
    while (temp % 2 == 0) {
        num = 2;
        k++;
        temp /= 2;
    }
 
    for (ll i = 3; i * i <= n; i += 2) {
        ll temp = n, tempK = 0;
        while (temp % i == 0) {
            tempK++;
            temp /= i;
        }
 
        if (tempK >= k) {
            k = tempK;
            num = i;
        }
    }
    vector<ll>seq;
    for(int i=0; i<k-1; i++)
    {
        seq.push_back(num);
        n/= num;
    }
    seq.push_back(n);

    cout << seq.size() << ndl;
    for(auto u:seq)
    {
        cout << u << " ";
    }
    cout << ndl;
}