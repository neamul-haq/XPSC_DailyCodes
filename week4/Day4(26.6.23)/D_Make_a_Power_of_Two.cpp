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
    ll i,mul=1;
      vector< ll >v;
      for(i=1;i<=62;i++)
      {
        v.push_back(mul);
        mul=mul*2;
      }
      ll n,j,vz,xz;
      string s,x;
      cin>>n;
      x=to_string(n);
      xz=x.size();
      vz=v.size();
      ll mn=INT_MAX;
      for(j=0;j<vz;j++)
      {
        s=to_string(v[j]);
        ll idx=0,cnt=0;
        for(int p=0;p<xz;p++)
        {
           if(x[p]==s[idx])
            idx++; 
        }
        ll ans=(xz-idx)+(s.size()-idx);
        mn=min(mn,ans);
      }
      cout<<mn<<endl;
}