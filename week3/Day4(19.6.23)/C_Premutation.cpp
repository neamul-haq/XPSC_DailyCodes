#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1;
    cin >> t;
    while(t--) solve();
}

void solve()
{
    ll n;
    cin >> n;
    map<int,int>m;
    map<int,int>::iterator it=m.end();
    int a[n][n-1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            int val;
            cin >> val;
            a[i][j] = val;
            if(j==n-2) m[val]++;
        }
    }
    int last, ansi;
    int c = m.begin()->second;
    --it;
    if(c!=1) last = m.begin()->first;
    else last = it->first;
    for(int i=0; i<n; i++)
    {
        if(last!=a[i][n-2])
        {
            ansi=i;
            break;
        }
    }
    for(int j=0; j<n-1; j++)
    {
        cout << a[ansi][j] << " ";
    }
    cout << last << '\n';
}