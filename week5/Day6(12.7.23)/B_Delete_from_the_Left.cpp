/*
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    string s,s2;
    cin >> s >> s2;
    if(s==s2){
        cout << 0 << ndl;
        return;
    }
    int sz=s.size();
    int sz2=s2.size();
    int cnt=0;
    if(sz>sz2){
        int j=sz-1;
        for(int i=sz2-1; i>=0; i--)
        {
            if(s[j]==s2[i]){
                cnt++;
                j--;
            }
            else{
                break;
            }
        }
    }
    else{
        int j=sz2-1;
        for(int i=sz-1; i>=0; i--)
        {
            if(s[i]==s2[j]){
                cnt++;
                j--;
            }
            else{
                break;
            }
        }
    }
    cout << sz+sz2-2*cnt << ndl;
    


}