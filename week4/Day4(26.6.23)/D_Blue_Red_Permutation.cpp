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
    int n,ans=0; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    string s; cin >> s;
    vector<int>b;
    vector<int>r;
    for(int i=0; i<n; i++){
        if(s[i]=='B') b.push_back(a[i]);
        else r.push_back(a[i]);
    }
    sort(all(b));
    sort(all(r));
    int indicator=1;
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]<indicator){
            cno
            return;
        }
        indicator++;
    }
    for(int i=0; i<r.size(); i++)
    {
        if(r[i]>indicator){
            cno
            return;
        }
        indicator++;
    }
    cyes
}