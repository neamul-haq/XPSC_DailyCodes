/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll,ll>m;
#define map map<ll,ll>m;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
int ans=0;
vector<int> a;
 
void Call(int l1,int r1,int l2,int r2){
    int mxL=0;
    for(int i=l1;i<=r1;i++){
        mxL=max(mxL,a[i]);
    }
    int mnR=INT_MAX;
    for(int i=l2;i<=r2;i++){
        mnR=min(mnR,a[i]);
    }
    if(mxL>mnR){
        //swap
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(a[i],a[R]);
            R++;
        }
        ans++;
    }
    if(l1==r1)return;
    int mid1=(l1+r1)/2;
    int mid2=(l2+r2)/2;
 
    Call(l1,mid1,mid1+1,r1);
    Call(l2,mid2,mid2+1,r2);
}


int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
        int n;              cin>>n;
        a.resize(n+1);
 
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
 
        ans=0;
        if(is_sorted(a.begin()+1,a.begin()+n+1)){
            cout<<0<<endl;
            return;
        }
 
        int mid=(n+1)/2;
        Call(1,mid,mid+1,n);
 
        if(is_sorted(a.begin()+1,a.begin()+n+1)){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
}