#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,i,k,ans=1; cin >> n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << 1 << " ";
    ll idx=0;
    ll j=1;
    for(ll i=1; i<n; i++)
    {
         if(a[idx]<j+1){
             cout << ans << " ";
             idx++;
         } 
         else{
            ans++;
            cout << ans << " ";
            j++;
         }
    }
    cout<<'\n';
}