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
    int n,mx=INT_MIN; cin >> n;
    vector<int>a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        mx=max(a[i],mx);
    }
    if(n==1){
        cout << 0 << ndl;
        return;
    }
    unordered_map<int,int>cnt;
    map< pair<int,int>, bool >vis;
    for(int i=2; i<=mx*2; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[j]<i){
                int serch=i-a[j];
                for(int k=1; k<=n; k++){
                    if(a[k]==serch && j!=k && !vis[{i,k}]){
                        cnt[i]++;
                        vis[{i,k}]=true;
                        break;
                    }
                }
            }
        }
    }
    int mxx=INT_MIN;
    for(auto it:cnt){
        mxx=max(mxx,it.second);
    }
    cout << mxx/2 << ndl;
}