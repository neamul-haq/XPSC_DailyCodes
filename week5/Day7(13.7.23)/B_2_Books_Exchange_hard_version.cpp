/*
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 2e5+5 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
int visited[N];
vector<int>b;
vector<int>adj_list[N];
void bfs(int src)
{
    queue<int>q;
    visited[src]=1;
    b.push_back(src);
    q.push(src);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
                b.push_back(adj_node);
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
    ll n,ans=0; cin >> n;
    vector<int>a(n+1);
    unordered_map<int,int>m;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        adj_list[i].clear();
        visited[i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        adj_list[i].push_back(a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(!visited[i]){
            bfs(i);
            for(int i=0; i<b.size(); i++)
            {
                m[b[i]]=b.size();
            }
            b.clear();
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << m[i] << " ";
    }
    cout << ndl;

}