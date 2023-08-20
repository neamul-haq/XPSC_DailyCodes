/*
AUTHOR: Neyamul_Haq
CREATED: 20-08-2023  14:43:22
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
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
string s;
int main()
{
    fast()
    
    while(cin >> s) solve();
}

void solve(){
    string ans="";
    vector<string>v={"kuti","lakh","hajar","shata"};
    int sz=s.size();
    if(sz>9){
        int j,i;
        if(sz==10){
            j=3;
        }
        else if(sz==11 or sz==12){
            j=2;
        }
        else if(sz==13 or sz==14){
            j=1;
        }
        else{
            j=0;
        }
        for( i=0; j<4; i+=2){
            if(j==3){
                ans+=s[i]+' ';
                ans+=v[j]+' ';
                j++;
                continue;
            }
            ans+=s[i]+s[i+1]+' ';
            ans+=v[j]+' ';
            j++;
        }
    }
    else{
        for(i=)
    }
    cout << ans << ndl;
}