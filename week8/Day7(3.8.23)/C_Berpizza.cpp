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
#define pp pair<int, int>

int main()
{
    fast()
    ll t=1;
    while(t--) solve();
}

void solve(){
    int n;
    cin >> n;
    int idx=1;
    map<int,int>mono;
    multimap<int,int,greater<int>>poly;
    priority_queue <pp, vector<pp>, greater<pp> > pq;
    vector<int>ans;
    while(n--){
        int type;
        cin >> type;
        auto it3=poly.begin();
        if(type==1){
            int val;
            cin >> val;
            mono.insert({idx,val});
            poly.insert({val,idx});
            //pq.push({})
            idx++;
        }
        else if(type==2){
            for(auto it:mono){
                    ans.push_back(it.first);
                    poly.erase(poly.find(it.second));
                    mono.erase(it.first);
                    break;
            }
        }
        else{
            ans.push_back(it3->second);
            mono.erase(it3->second);
            poly.erase(it3);
        }
    }
    for(auto u:ans)
    {
        cout << u << " ";
    }
    cout << ndl;
}