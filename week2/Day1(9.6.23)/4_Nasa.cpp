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


bool is_palindrome(ll x)
{
    string s = to_string(x);
    string s2 = s;
    reverse(all(s2));
    return s2==s;
}


int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,c,ans=0; cin >> n;

    vector<ll>a(n);
    vector<ll>palList;
    unordered_map<ll,ll>m;

    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for(ll i=0; i<32769; i++)
    {
        if(is_palindrome(i)) palList.push_back(i);
    }

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<palList.size(); j++)
        {
            ll x = a[i]^palList[j];
            if(x<32769 && m[x]>0){
                ans+=m[x];
                cout << a[i] << " " << x  << " " << m[x] << ndl;
            }
        }
    }
    cout << (ans+n)/2 << ndl;

}
