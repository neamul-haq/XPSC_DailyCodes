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
    int n,ans=0,cnt=0; 
    string s; cin >> s;
    bool ck=false;
    stack<int>st;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1]){
            ck=false;
            continue;
        }
        else{
            if(!ck){
                st.push(s[i]);
                ck=true;
            }
            else{
                if(s[i]==st.top()){
                    ans+=cnt;
                    ck=false;
                    st.pop();
                    cnt=1;
                }
                else cnt++;
            }
        }
    }
    cout << ans << ndl;
}