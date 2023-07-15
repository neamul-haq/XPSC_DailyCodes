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
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    string st; cin >> st;
    set<char>s;
    unordered_map<char,int>m;
    for(char ch='a'; ch<='z'; ch++)
    {
        m[ch]=-5;
    }
    char mx='a'-1;
    for(int i=0; i<st.size(); i++)
    {
        s.insert(st[i]);
        m[st[i]]=i;
        mx=max(mx,st[i]);
    }
    if(s.size()<st.size()){
        cno
        return;
    }

    if(m['a']==-5){
        cno
        return;
    }
    int l=m['a']-1;
    int r=m['a']+1;
    for(char ch='b'; ch<='z'; ch++)
    {
        if(ch==mx+1){
            break;
        }
        
        if(m[ch]==l){
            l--;
        }
        else if(m[ch]==r){
            r++;
        }
        else{
            cno
            return;
        }
    }
    cyes
}