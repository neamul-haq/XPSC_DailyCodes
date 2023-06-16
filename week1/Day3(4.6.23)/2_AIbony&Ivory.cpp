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
    ll a,b,c,ans=0; cin >> a >> b >> c;

    if(a==c or b==c){
        cout << "Yes" << "\n";
        return;
    }
    for(int i=1; i<=1000; i++)
    {
        int val = c - a*i;
        if(val<0) break;
        if(val%b==0){
            cout << "Yes" << "\n";
            return;
        }
    }

    for(int i=1; i<=1000; i++)
    {
        int val = c - b*i;
        if(val<0) break;
        if(val%a==0){
            cout << "Yes" << "\n";
            return;
        }
    }

    cout << "No" << "\n";
}
