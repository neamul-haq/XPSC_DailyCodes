#include <bits/stdc++.h>
typedef long long int ll;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;
int main() {
    fast
    int t;
    cin >> t;
    while(t--){
        string s;
        int flag=1;
        cin >> s;
        char next;//esYes
        if(s[0]!='Y' and s[0]!='e' and s[0]!='s'){
            cout << "NO" << endl;
            continue;
        }

        if(s[0]=='Y') next = 'e';
        if(s[0]=='e') next = 's';
        if(s[0]=='s') next = 'Y';
        for(int i=1; i<s.size(); i++){
            if(s[i]!=next ) flag=0;
            if(next=='Y') next = 'e';
            else if(next=='e') next = 's';
            else next = 'Y';
        }
        if(flag==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}