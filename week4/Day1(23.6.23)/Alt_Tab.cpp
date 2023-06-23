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
const ll N = 4e4+5;
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
    ll n; cin >> n;
    string a[n];
    string s2="";
    unordered_map<string,ll>m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=n-1; i>=0; i--)
    {
        if(m[a[i]]==0){
            char c=a[i][a[i].size()-1];
            char d=a[i][a[i].size()-2];
            s2+=d;
            s2+=c;
            m[a[i]]++;
        }
    }
    cout << s2 << ndl;
}