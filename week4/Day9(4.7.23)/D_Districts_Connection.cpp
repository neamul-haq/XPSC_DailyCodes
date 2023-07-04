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
    ll n; cin >> n;
    vector<int>a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    queue<int>q;
    set<int>s;
    vector<pair<int,int>>ans;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++){
            if(a[i]!=a[j]){
                q.push(j);
                s.insert(i);
                s.insert(j);
                ans.push_back({i,j});
            }
        }
    }
    unordered_map<int,int>vis;
    if(s.size()==n){
        cyes
        for(int i=0; i<ans.size(); i++){
            if(vis[ans[i].first] && vis[ans[i].second]){
                continue;
            }
            else{
                cout << ans[i].first << " " << ans[i].second << ndl;
                vis[ans[i].first]=1;
                vis[ans[i].second]=1;
            }
        }
    }
    else cno
}