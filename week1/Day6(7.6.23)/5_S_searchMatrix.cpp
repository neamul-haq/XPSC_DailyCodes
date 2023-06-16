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
    ll n,m,ans=0,x; cin >> n >> m;

    int M[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> M[i][j];
        }
    }
    cin >> x;
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(M[i][j]==x) {
                flag = true;
                break;
            }
        }
    }

    if(flag) cout << "will not take number";
    else cout << "will take number";

}
