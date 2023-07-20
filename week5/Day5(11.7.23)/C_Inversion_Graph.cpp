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
const ll N = 1e5+4;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
int visited[N];

vector<int>adj_list[N];

void bfs(int src)
{
    queue<int>q;
    visited[src]=1;

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
    int n,ans=0; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        visited[i]=0;
        adj_list[i].clear();
    }
    visited[n]=0;
    adj_list[n].clear();
    unordered_map<int,bool>m;
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx=max(mx,a[i]);
        if(m[a[i]]==false){
            m[a[i]]=true;
            for(int j=a[i]-1; j>=1; j--)
            {
                if(m[j]) break;
                else{
                    adj_list[a[i]].push_back(j);
                    adj_list[j].push_back(a[i]);
                    m[j]=true;
                }
            }
        }
        else{
            for(int j=mx; j>a[i]; j--)
            {
                adj_list[a[i]].push_back(j);
                adj_list[j].push_back(a[i]);
            }
        }
    }

    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==0)
        {
            bfs(i);
            cnt++;
        }
    }
    cout << cnt << "\n";
}