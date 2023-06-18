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
    vector<char>a(n);
    queue<ll>q;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll l=0,r=n-1;
    while(l<r)
    {
        if(a[l]=='L')  q.push(l);
        if(a[r]=='R')  q.push(r);
        l++;
        r--;
    }
    
    for(int i=0; i<n; i++)
    {
        if(a[i]=='L') ans+=(i);
        else{
            ans+=(n-i-1);
        }
    }
    //cout << ans << ndl;

    for(int i=0; i<n; i++)
    {
        if(!q.empty()){
            if(q.front()<=((n-1)/2)) {
                ans+=(n-1-q.front());
                ans-=q.front();
                cout << ans << " ";
                q.pop();
            }
            else{
                ans+=q.front();
                ans-=(n-1-q.front());
                cout << ans << " ";
                q.pop();
            }
        }
        else{
            cout << ans << " ";
        }
    }
    cout << ndl;

}