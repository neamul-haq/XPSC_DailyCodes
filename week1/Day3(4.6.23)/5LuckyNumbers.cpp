#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll a,b; cin >> a >> b;
    vector<int>ar;
    queue<int>q;

    q.push(4);
    q.push(7);

    while(!q.empty())
    {
        int val = q.front()*10 + 4;
        int val2 = q.front()*10 + 7;
        ar.push_back(q.front());
        q.pop();
        if(val<=100000) q.push(val);
        if(val2<=100000) q.push(val2);
    }
    bool flag=false;
    for(auto i: ar)
    {
        if(i>b) break;
        if(i>=a && i<=b){
            cout << i << " ";
            flag=true;
        }
    }
    if(!flag) cout << -1 << "\n";

}
