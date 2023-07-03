/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
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
    ll n,s=0; cin >> n;
    vector<int>a(n+2);
    for(int i=0; i<=n+1; i++)
    {
        cin >> a[i];
        s+=a[i];
    }

    sort(all(a),greater<int>());
    s-=a[0];
    s-=a[1];
    if(s==a[0] or s==a[1]){
        for(int i=2; i<=n+1; i++)
        {
            cout << a[i] << " ";
        }
        cout << ndl;
    }
    else{
        for(int i=2; i<=n+1; i++)
        {
            if(s+a[1]-a[i]==a[0]){
                for(int j=2; j<=n+1; j++)
                {
                    if(j!=i){
                        cout << a[j] << " ";
                    }
                }
                cout << a[1] << ndl;
                return;
            }
        }
        cout << -1 << ndl;
    }
}