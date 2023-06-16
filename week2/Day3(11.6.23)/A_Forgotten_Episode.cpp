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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    int n,ans=0; cin >> n;
    vector<int>a(n-1);

    for(int i=0; i<n-1; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    for(int i=0; i<n; i++)
    {
        if(a[i]!=i+1) {
            cout << i+1 << ndl;
            return;
        }
    }

}