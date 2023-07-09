#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 2e5+5 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

vector<ll>adj_list[N];
ll visited[N];
ll rankk[N];
unordered_map<ll,ll>parent;

void bfs(ll src,map<pair<ll,ll>,ll>m)
{
    queue<ll>q;
    visited[src]=1;

    q.push(src);

    while(!q.empty())
    {
        ll head = q.front();
        q.pop();

        for(ll adj_node:adj_list[head])
        {
            parent[adj_node]=head;
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
                if(head==1) rankk[adj_node]=1;
                else if(m[make_pair(head,adj_node)]<m[make_pair(parent[head],head)]) rankk[adj_node] = rankk[head]+1;
                else rankk[adj_node] = rankk[head];
            }
        }
    }
}
int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,c,ans=0; cin >> n;

    map<pair<ll,ll>,ll>m;

    for(ll i=0;i<=n; i++)
    {
        rankk[i]=0;
        visited[i]=0;
        adj_list[i].clear();
    }
    parent.clear();

    for(ll i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        m[make_pair(u,v)] = i;
        m[make_pair(v,u)] = i;
    }
    bfs(1,m);

    for(ll i=2; i<=n; i++)
    {
        ans = max(ans,rankk[i]);
    }
    cout << ans << ndl;

}