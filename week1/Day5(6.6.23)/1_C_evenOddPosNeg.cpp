#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
int const mod = 1e9+7;
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
    ll n,pos=0,neg=0,od=0,ev=0; cin >> n;

    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        if(val>0) pos++;
        if(val<0) neg++;
        if(val%2) od++;
        if(val%2==0) ev++;
    }
    cout << "Even: " << ev << ndl;
    cout << "Odd: " << od << ndl;
    cout << "Positive: " << pos << ndl;
    cout << "Negative: " << neg << ndl;


}
