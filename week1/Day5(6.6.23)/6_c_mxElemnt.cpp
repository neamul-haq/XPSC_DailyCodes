#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
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
    ll n,k,ans=0; cin >> n >> k;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(all(a),greater<ll>());

    for(int i=0; i<k; i++)
    {
        if(a[i]>0) ans+=a[i];
    }
    cout << ans << ndl;

}
