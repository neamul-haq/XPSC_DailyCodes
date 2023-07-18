#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n, a, b, c,x; cin >> x;
    if(x<2) {
        cout << -1 << '\n';
        return;
    }
    ll root = floor(sqrt(x-1));
     a=root;
     b=root;
    if(a*(a+1)<x){
        b++;
    }
    c= x- (a*b);
    cout << a << " " << b << " " << c << '\n';
}