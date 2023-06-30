#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string a,b;
        int A,B;
        cin >> a >> b;
        if(a[a.size()-1]=='L') A = 10000 + a.size()-1;
        else if(a[a.size()-1]=='M') A = 1000;
        else if(a[a.size()-1]=='S') A = 100 - a.size()-1;
        if(b[b.size()-1]=='L') B = 10000 + b.size()-1;
        else if(b[b.size()-1]=='M') B = 1000;
        else B = 100- b.size()-1;
        for(int i=0; i<1; i++){
            if(A>B) cout << '>' <<endl;
            else if (A<B) cout << '<' <<endl;
            else cout << '=' << endl;
        }
    }
}