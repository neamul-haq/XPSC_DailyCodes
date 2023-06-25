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

ll cnt(ll n, vector<ll>a){
    if(n==2){
        if(a[0]<a[1]){
            return 1;
        }
        else return 0;
    }

    ll half = n/2;
    vector<ll>b(half);
    vector<ll>c(half);
    for(int i=0; i<half; i++)
    {
        b[i]=a[i];
    }
    int j=0;
    for(int i=half; i<n; i++){
        c[j]=a[i];
        j++;
    }
    return cnt(n/2,b)+cnt(n/2,c);
}


int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,ans=0; cin >> n;
    vector<ll>a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ans=cnt(n,a);
    cout << ans << ndl;
}