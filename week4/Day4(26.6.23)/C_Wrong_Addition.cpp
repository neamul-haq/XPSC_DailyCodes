/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll a,s,ans=0; cin >> a >> s;
    string s2="";
    if(a==s){
        cout << 0 << ndl;
                return;
    }
    while(s!=0){
        ll b=s%10;
        ll c=s%100;
        ll d=a%10;
        if(b<d){
            if((c-d)<10 && (c-d)>-1) s2+=to_string(c-d);
            else{
                cout << -1 << ndl;
                return;
            }
            s/=100;
            a/=10;
        }
        else{
            s2+=to_string(b-d);
            s/=10;
            a/=10;
        }
    }

    if(a!=0){
        cout << -1 << ndl;
        return;
    }
    else{
        reverse(all(s2));
        while(s2[0]=='0')  s2.erase(s2.begin());
        cout << s2 << ndl;
    }

}