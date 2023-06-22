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
    int m[3][3];
    int mx=INT_MIN,mxi,mxj;
    int mn=INT_MAX,mni,mnj;
    for(int i=1; i<=2; i++)
    {
        for(int j=1; j<=2; j++)
        {
            cin >> m[i][j];
            if(m[i][j]>mx){
                mx=max(mx,m[i][j]);
                mxi=i;
                mxj=j;
            } 
            if(m[i][j]<mn){
                mn=min(mn,m[i][j]);
                mni=i;
                mnj=j;
            }  
        }
    }

    if(abs(mxi-mni)==1 && abs(mxj-mnj)==1){
        cyes
    }
    else cno


}