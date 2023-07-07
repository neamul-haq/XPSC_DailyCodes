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
    int n,ans=0; cin >> n;
    vector<int>a(n);
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]]=i;
    }
    if(is_sorted(all(a))){
                for(auto &u:a) cout << u << " ";
                cout << ndl;
                return;
    }
    int cnt=0;
    int search=1;
    for(int j=0; j<n; j++){

        if(a[j]==search){
            search++;
            for(int i=j; i>=0; i--){
            if(a[i]==1 and i==0){
                break;
            }
            if(a[i]<a[i-1]){
                swap(a[i],a[i-1]);
                cnt++;
                if(cnt==n-1 or is_sorted(all(a))){
                  break;
                }
            }
            else break;
            }
        }
        j=-1;
        if(cnt==n-1 or is_sorted(all(a))){
            break;
        }
    }
    
    
    for(auto &u:a) cout << u << " ";
    cout << ndl;
}