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
    ll n,c=0; cin >> n;

    vector<int>a(n);
    unordered_map<int,int>m;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(m[a[i]+1]>0) c++;
    }
    cout << c << "\n";

}
