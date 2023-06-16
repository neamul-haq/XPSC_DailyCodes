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
    ll t=1;
    while(t--) solve();
}

void solve(){
    ll n,c,ans=0; cin >> n >> c;

    vector<ll>a(n);
    unordered_map<ll,ll>m;

    for(auto &u: a)
    {
        cin >> u;
        m[u]++;
    }

    for(int i=1; i<=c; i++)
    {
        cout << m[i] << ndl;
    }


}
