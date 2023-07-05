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
    ll n;
        cin>>n;
 
        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
 
        set<ll> s;
        ll i= 1;
        ll sum =0;
        while(i<=n){
            if(a[i]<0){
                while(a[i]<0 && i<=n){
                    s.insert(a[i]);
                    i++;
                }
            }else{
                while(a[i]>0 && i<=n){
                    s.insert(a[i]);
                    i++;
                }
            }
            auto it = s.rbegin();
            sum = sum + *it;
            s.clear();
        }
 
        cout<<sum<<ndl;
}