#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,ans=0; cin >> n;
    vector<int>a(n);
    map<int, int>m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++)
    {
        int val = a[i];
        if(m[a[i]]!=0)
        {
            ans++;
            while(m[val])
            {
                m[val]--;
                val++;
            }
        }
    }
    cout << ans << '\n';
}