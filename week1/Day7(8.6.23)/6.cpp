#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
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
    ll n,c,ans=0; cin >> n;
    string s;
    cin >> s;
    unordered_map<char,int>m;

    for(int i=0; i<n; i++)
    {
        m[s[i]]++;
    }
    for(auto i: m)
    {
        ans += (i.second+1);
    }
    cout << ans << ndl;

}
