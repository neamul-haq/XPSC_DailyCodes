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
    string s;
    cin >> s;

    bool lead0 = true;

    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='0' && lead0) continue;
        else cout << s[i];
        lead0 = false;
    }
    cout << ndl;
    string s2 =s;
    reverse(all(s));

    if(s==s2) cout << "YES" << ndl;
    else cout << "NO" << ndl;
}
