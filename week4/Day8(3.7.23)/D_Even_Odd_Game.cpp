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
    ll n,alic=0,bob=0; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(all(a),greater<int>());
    for(int i=0; i<n; i++)
    {
        int v=a[i];
        if(i%2==0 && v%2==0) alic+=v;
        else if(i%2==1 && v%2==1) bob+=v;
        else continue;
    }
    if(alic>bob) {
        cout << "Alice" << ndl;
    }
    else if(alic==bob){
        cout << "Tie" << ndl;
    }
    else{
        cout << "Bob" << ndl;
    }
}