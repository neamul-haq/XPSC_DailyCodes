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

int main()
{
    fast()
    ll t=1;
    while(t--) solve();
}

void solve(){
    string s; cin >> s;
    int freq[26]={0};

    for(int i=0; i<s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    int flag=-1;
    for(int i=0; i<26; i++)
    {
        if(freq[i]==0) {
            flag=i;
            break;
        }
    }
    if(flag!=-1){
        int i = flag+97;
        char c = i;
        cout << c << ndl;
    }
    else cout << "None" << ndl;

}
