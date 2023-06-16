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
    ll n,m,c,ans=0; cin >> n >> m;

    int M[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> M[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=m-1; j>=0; j--)
        {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }

}
