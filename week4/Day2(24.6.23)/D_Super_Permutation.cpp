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
    ll n,ans=0; cin >> n;
    vector<ll>a(n);
    ll l=0;
    ll r=n-1;
    for(int i=0; i<n; i++)
    {
        if(i%2==0){
            a[i]=l;
            l++;
        }
        else{
            a[i]=r;
            r--;
        }
    }

    if(n==1){
        cout << 1 << ndl;
        return;
    }
    if(n%2==1){
        cout << -1 << ndl;
        return;
    }
    ll sum=n+n-1;
    cout << n << " " << n-1 << " ";
    for(int i=2; i<n; i++)
    {
        ll inc = sum/n;
        ll sum2=(inc*n)+a[i];
        if(sum2>sum){
            cout << sum2-sum << " ";
            sum+=(sum2-sum);
        }
        else{
            inc++;
            sum2=(inc*n)+a[i];
            cout << sum2-sum << " ";
            sum+=(sum2-sum);
        }
    }
    cout << ndl;
}