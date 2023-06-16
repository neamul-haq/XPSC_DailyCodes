#include<bits/stdc++.h>
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
    ll n,a,b,c,cnt=1; cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << ' ';
        }
        for(int k=1; k<=cnt; k++)
        {
            cout << '*';
        }
        cnt+=2;
        cout << "\n";
    }
    for(int i=1; i<=2*n-1; i++)
    {
        cout << '*';
    }
    cout << endl;
    cnt-=4;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << ' ';
        }
        for(int k=1; k<=cnt; k++)
        {
            cout << '*';
        }
        cnt-=2;
        cout << "\n";
    }

}
