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
    ll n,k,ans=0,ans2=0; cin >> n >> k;
    vector<int>a(n);
    map<int,int,greater<int>>m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans+=a[i];
    }
    ans2=ans;
    int k2=k;
    sort(all(a),greater<int>());
    int i=0;
    int j=k;
    while(k){
        ans+=(a[j]/a[i]);
        ans-=a[j];
        ans-=a[i];
        k--;
        i++;
        j++;
    }

    cout << ans<< ndl;
}