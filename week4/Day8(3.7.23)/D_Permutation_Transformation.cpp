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
int n,a[101];
int indxs[101];


void make_subtree(int start,int end,int depth){
    if(start>end){
        return;
    }
    int maxm=0,ind=start;
    for(int i=start;i<=end;i++){
        if(a[i]>maxm){
            maxm=a[i];
            ind=i;
        }
    }
    indxs[ind]=depth;
    make_subtree(start,ind-1,depth+1);
    make_subtree(ind+1,end,depth+1);
}


int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    make_subtree(0,n-1,0);
    for(int i=0; i<n; i++){
        cout<<indxs[i]<<" ";
    }
    cout<<ndl;
}