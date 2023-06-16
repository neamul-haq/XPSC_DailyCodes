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
    ll n,ans=0,q; cin >> n;
    vector<ll>a(n+1);
    vector<ll>b(n+1);

    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
        if(i>1) a[i]+=a[i-1];
    }
    sort(b.begin()+1,b.end());
    for(int i=1; i<=n; i++)
    {
        if(i>1) b[i]+=b[i-1];
    }
    cin >> q;
    while(q--)
    {
        ll tp,l,r;
        cin >> tp >> l >> r;
        if(tp==1)
        {
            if(l==r && l!=1) cout << a[r]-a[l-1]<< ndl;
            else if(l==r && l==1) cout << a[r]<< ndl;
            else if(l!=1) cout << a[r]-a[l-1] << ndl;
            else cout << a[r] << ndl;
        }
        else{
            if(l==r && l!=1) cout << b[r]-b[l-1]<< ndl;
            else if(l==r && l==1) cout << b[r]<< ndl;
            else if(l!=1) cout << b[r]-b[l-1] << ndl;
            else cout << b[r] << ndl;
        }
    }

}