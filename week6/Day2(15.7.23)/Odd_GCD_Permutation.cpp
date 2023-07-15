#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n,a,b,c,ans=0; cin >> n;
    if(n%2) cout << -1 << "\n";
    else{
        for(int i=n; i>=1; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

}
