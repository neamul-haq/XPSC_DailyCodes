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
     ll l,r,x;               cin>>l>>r>>x;
        ll a,b;                 cin>>a>>b;
 
        if(a==b){
            cout<<0<<endl;
            return;
        }
 
        if(abs(b-a)>=x){
            cout<<1<<endl;
            return;
        }
 
        if(b>a){
            if(b+x<=r or a-x>=l){
                cout<<2<<endl;
            }
            else if(a+x<=r and b-l>=x){
                cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if(a+x<=r or b-x>=l){
                cout<<2<<endl;
            }
            else if(a-x>=l and r-b>=x){
                cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
}