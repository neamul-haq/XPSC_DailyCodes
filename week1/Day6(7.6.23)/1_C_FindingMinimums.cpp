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
    ll n,k,mn=INT_MAX; cin >> n >> k;
    vector<ll>a(n+1);
    for(int i=1; i<=n; i++)
    {
        ll val;
        cin >> val;
        mn = min(mn,val);
        if(i%k==0 or i==n){
            cout << mn << " ";
            mn = INT_MAX;
        }
    }

}
