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
    float a; cin >> a;
  int c = (int)a;
  int d ;
  	float b = a+.5;
  d = (int)b;
  if(a==b) cout << c << "\n";
  else cout << d << "\n";
}
