#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
char s[1000005];
int main()
{
    fast()
    ll t=1;
    while(t--) solve();
}

void solve(){

    fgets(s,sizeof(s), stdin);
    string s2="";
    string s3 = "  ";
    for(int i=0; i<1000005; i++)
    {
        if(s[i]=='\n') break;
        if(s[i]==' '){
            reverse(all(s2));
            cout << s2 << " ";
            s2="";
        }
        else s2+=s[i];
    }
    reverse(all(s2));
    cout << s2;
}
