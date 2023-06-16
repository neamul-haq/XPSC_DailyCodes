/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define minus cout << -1 << '\n'
#define umap unordered_map<string,int>m;
#define map map<ll,ll>m;
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
    int n; cin >> n;
    umap;
    string mat[4][n+1];
    int ans[4]={0};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            string s;
            cin >> s;
            mat[i][j]=s;
            m[s]++;
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(m[mat[i][j]]==1) ans[i]+=3;
            else if(m[mat[i][j]]==2) ans[i]+=1;
        }
    }
    for(int i=0; i<3; i++)
    {
        cout << ans[i] << " ";
    }
    cout << ndl;

}