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
    int n,ans=0; cin >> n;
    string s; cin >> s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') {
            ans++;
            i+=2;
        }
    }
    cout << ans << ndl;

}
