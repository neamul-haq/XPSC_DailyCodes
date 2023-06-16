#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n'
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
    ll n,c,ans=0; cin >> n;

    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int l=0,r=n-1;
    while(l<=r)
    {
        if(l==r){
            cout << a[l];
            break;
        }
        cout << a[l] << " " << a[r] << " ";
        l++;
        r--;
    }

}
