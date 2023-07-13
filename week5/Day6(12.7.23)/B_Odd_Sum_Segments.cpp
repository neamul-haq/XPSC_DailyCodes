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
    ll n,k,cnt=0,sum=0; cin >> n >> k;
    vector<int>a(n);
    vector<int>ans;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    if(k==1){
        if(sum%2==1){
            cyes
            cout << n << ndl;
        }
        else{
            cno
        }
        return;
    }
    ll sum2=0;
    ll sum3=0;
    for(int i=0; i<n; i++)
    {
        sum2+=a[i];
        sum3+=a[i];
        if(sum2%2==1){
            ans.push_back(i+1);
            cnt++;
            sum2=0;
        }
        if(cnt==k-1){
            if((sum-sum3)%2==1){
                ans.push_back(n);
                cnt++;
                break;
            }
            else{
                cno
                return;
            }
        }
    }
    if(cnt<k){
        cno
        return;
    }
    cout << "YES" << ndl;
    for(auto it:ans){
        cout << it << " ";
    }
    cout << ndl;
}