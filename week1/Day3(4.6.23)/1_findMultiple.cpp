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
    ll t=1;
    while(t--) solve();
}

void solve(){
    ll a,c,b,ans=0; cin >> a >> b >> c;
    ll d=c,i=1;
    while(d<=b)
    {
        d=c*i;
        if(d>=a && d<=b) {
            cout << d;
            return;
        }
        i++;
    }

    cout << -1;
}
