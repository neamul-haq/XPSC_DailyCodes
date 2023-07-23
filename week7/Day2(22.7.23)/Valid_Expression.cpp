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
    ll n,x; cin >> n >> x;
    vector<char>a;
    if(x>n+1 or x<=n*-1){
        a.push_back('-');
        a.push_back('1');
    }
    else if(x==0){
        for(int i=1; i<n; i++){
            a.push_back('*');
        }
        a.push_back('-');
    }
    else if(x==1){
        for(int i=0; i<n; i++){
            a.push_back('*');
        }
    }
    else if(x>1){
        for(int i=1; i<x; i++){
            a.push_back('+');
        }
        for(int i=0; i<=n-x; i++){
            a.push_back('*');
        }
    }
    else{
        for(int i=0; i<=abs(x); i++){
            a.push_back('-');
        }
        for(int i=1; i<n-abs(x); i++){
            a.push_back('*');
        }
    }
    for(auto val:a)
    {
        cout << val;
    }
    cout << '\n';
}