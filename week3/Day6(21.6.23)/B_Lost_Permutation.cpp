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
    int t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n,s,ans=0; cin >> n >> s;
    int sum=0;
    bool flg=true;
    unordered_map<int,int>m;
    for(int i=0; i<n; i++)
    {
        int v;
        cin >>v;
        m[v]++;
        if(m[v]>1){
            flg=false;
        }
        ans=max(ans,v);
        sum+=v;
    }
    if(!flg){
        cno
        return;
    }
    int sum2=sum;
    sum+=s;
    for(int i=1; sum2<=sum; i++)
    {
        if(sum2+i>sum)
        {
            break;
        }
        if(m[i]==0){
            sum2+=i;
            ans=max(ans,i);
        }
    }

    
    if(ans*(ans+1)==2*sum) cyes
    else cno

}