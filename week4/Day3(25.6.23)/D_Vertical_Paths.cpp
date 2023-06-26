/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll,ll>m;
#define map map<ll,ll>m;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 2e5+5;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
int root;
int visited[N],parent[N];
bool lef[N];
vector<int>adj_list[N];

void dfs(int node)
{
    visited[node]=1;
    bool flag=1;
    for(int adj_node : adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            parent[adj_node]=node;
            dfs(adj_node);
            flag=0;
        }
    }
    if(flag){
        lef[node]=true;
    }
}

int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n,ans=0; cin >> n;
    for(int i=1; i<=n; i++){
        visited[i]=0;
        lef[i]=false;
        parent[i]=0;
        adj_list[i].clear();
    }
    for(int i=1; i<=n; i++)
    {
        int in; cin>>in;
        if(i==in){
            root=i;
            continue;
        }
        adj_list[i].push_back(in);
        adj_list[in].push_back(i);
        
    }

    parent[root]=-1;
    dfs(root);
    ans=0;
    for(int i=1; i<=n; i++)
    {
        if(lef[i]==true){
            ans++;
        } 
    }
    cout << ans << ndl;
    unordered_map<int,int>m;
    for(int i=1; i<=n; i++)
    {
        if(lef[i]==true){
            vector<int>path;
            int selected_node = i;

            while(true)
            {
                if(m[selected_node]==1 or selected_node==-1){
                    m[selected_node]=1;
                    break;
                } 
                path.push_back(selected_node);
                m[selected_node]=1;
                selected_node = parent[selected_node];
            }

            reverse(path.begin(), path.end());
            cout << path.size() << "\n";
            for(int nd: path)
            {
                if(nd>0) cout << nd << " ";
            }
            cout << "\n";
        }
    }
}