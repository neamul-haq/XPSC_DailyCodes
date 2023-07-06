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
    char m[9][9];
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cin>>m[i][j];
        }
    }

    if(m[0][0]!='9') m[0][0]++;
    else m[0][0]--;
    if(m[1][3]!='9') m[1][3]++;
    else m[1][3]--;
    if(m[2][6]!='9') m[2][6]++;
    else m[2][6]--;
    if(m[3][1]!='9') m[3][1]++;
    else m[3][1]--;
    if(m[4][4]!='9') m[4][4]++;
    else m[4][4]--;
    if(m[5][7]!='9') m[5][7]++;
    else m[5][7]--;
    if(m[6][2]!='9') m[6][2]++;
    else m[6][2]--;
    if(m[7][5]!='9') m[7][5]++;
    else m[7][5]--;
    if(m[8][8]!='9') m[8][8]++;
    else m[8][8]--;

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cout<<m[i][j];
        }
        cout << ndl;
    }

}