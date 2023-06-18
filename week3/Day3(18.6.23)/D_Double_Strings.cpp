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
    ll n; cin >> n;
    string ar[n];
    string ans;
    unordered_map<string,ll>m;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        ar[i] = s;
        m[s]++;
        ans+='0';
    }

    for(int i=0; i<n; i++)
    {
        string st=ar[i];
        string s="";
        int sz=st.size();
        for(int j=0; j<sz-1; j++)
        {
            s+=st[j];
            if(m[s]>0 && m[st.substr(j+1,sz)]>0){
                ans[i]='1';
                break;
            } 
        }
    }

    cout << ans << ndl;
}