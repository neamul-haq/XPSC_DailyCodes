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
    int n,m,ans=0; cin >> n >> m;
    multimap<int, pair<int, int>>mp;
    for(int i=1; i<=m; i++)
    {
        int x,w;
        cin >> x >> w;
        mp.insert({w,make_pair(i,x)});
    }
    int cnt=0,sum=0;
    vector<int>v;
    unordered_map<int,int>mp2;
    for(auto it: mp){
        cnt++;
        v.push_back(it.second.second);
        mp2[it.second.second]=it.second.first;
        sum+=(it.first);
        if(cnt==n*2) break;
    }
    cout << sum << ndl;
    sort(all(v));
    int l=0, r=v.size()-1;
    while(l<r){
        cout << mp2[v[l]] << " " << mp2[v[r]] << ndl;
        l++;
        r--;
    }
    cout << ndl;
}