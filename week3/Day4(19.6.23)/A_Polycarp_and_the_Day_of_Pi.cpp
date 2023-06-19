#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
void solve();

int main()
{
    fast()
    ll t; cin >> t;
    while(t--) solve();
}

void solve(){
    ll ans=0;
    string s,s2;
    s2="314159265358979323846264338327";
    cin >> s;
    for(int i=0;i<s.size(); i++)
    {
        if(s[i]==s2[i]) ans++;
        else break;
    }

    cout << ans << '\n';
}