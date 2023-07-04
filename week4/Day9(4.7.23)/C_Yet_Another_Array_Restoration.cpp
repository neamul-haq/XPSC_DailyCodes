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
    ll n,dif; cin >> n;
    ll x,y; cin >> x >> y;
    for(ll i=1; i<=(y-x); i++)
    {
        ll df=y-x;
        if(df%i==0 && (df/i)+1<=n){
            dif=i;
            break;
        }
    }
    //cout << dif << ndl;
    vector<ll>ans;
    ll val=y;
    while(ans.size()<n && val>0){
        ans.push_back(val);
        val-=dif;
    }
    val=y;
    val+=dif;
    while(ans.size()!=n){
        ans.push_back(val);
        val+=dif;
    }
    for(auto &u:ans) cout << u << " ";
    cout << ndl;
}