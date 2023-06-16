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
    ll n,c,ans=0; cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==(n/2)+1 && j==(n/2)+1)  cout << 'X';
            else if(i==j) cout << '\\';
            else if(j==n-i+1) cout << '/';
            else cout << '*';
        }
        cout << ndl;
    }

}
