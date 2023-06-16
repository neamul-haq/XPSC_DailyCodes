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
    string s; cin >> s;
    char s2[4];
    for(int i=0,j=0; i<4; i++)
    {
        if(i<4-s.size()) s2[i]='0';
        else{
            s2[i] = s[j];
            j++;
        }
    }
    for(auto i: s2)
        cout << i;
}
