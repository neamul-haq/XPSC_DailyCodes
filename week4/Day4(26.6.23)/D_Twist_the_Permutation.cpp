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
    int n; cin >> n;
    vector<int>a(n);
    vector<int>ans(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int target=n;
    while(target)
    {
        int tindex;
        for(int i=target-1; i>=0; i--){
            if(a[i]==target){
                tindex=i;
                break;
            }
        }
        if(tindex==target-1){
            target--;
            continue;
        }
        ans[target-1] = tindex+1;
        vector<int>temp;
        for(int i=tindex; i>=0; i--){
            temp.push_back(a[i]);
        }
        for(int i=target-1; i>tindex; i--)
        {
            temp.push_back(a[i]);
        }
        int j=0;
        for(int i=target-1; i>=0; i--)
        {
            a[i]=temp[j];
            j++;
        }
        target--;
    }

    for(auto i:ans){
        cout << i << " ";
    }
    cout << ndl;
}