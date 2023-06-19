#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
void solve();

int main()
{
    fast()
    ll t; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,s,r; cin >> n >> s >> r;
    vector<int>a(n);
    ll maxx = s-r;
    a[0] = maxx;
    for(int i=1; i<n; i++)
    {
        if(r==n-i){
            while(r>0)
            {
                a[i]=1;
                i++;
                r--;
            }
            break;
        }
        if(r>n-i && r-maxx>=n-i-1)
        {
            a[i]=maxx;
            r-=maxx;
        }
        else{
            ll val = r-n+i+1;
            a[i]=val;
            r-=val;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}