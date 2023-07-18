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
    ll n,a,b,ans=0; cin >> n;
    set<int, greater<int>> s;
    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    auto it = s.begin();
    a=*it;
    ++it;
    b=*it;
    cout << a+b << '\n';
}