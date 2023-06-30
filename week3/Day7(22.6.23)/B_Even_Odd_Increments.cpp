#include <iostream>
typedef long long int ll;
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
            ll ar[n];
            ll sum=0,ev=0,od=0;
        for(int i=0; i<n; i++){
            cin >> ar[i];
            sum+=ar[i];
            if(ar[i]%2==0) ev++;
            else od++;
        }
        for(int i=0; i<q; i++){
            ll tj, xj;
            cin >> tj >> xj;
            if(tj==0 && xj%2==0) sum = sum + ev*xj;
            else if(tj==0 && xj%2!=0) {
                sum = sum + ev*xj;
                od = od + ev;
                ev=0;
            }
            else if(tj==1 && xj%2==0) sum = sum + od*xj;
            else sum = sum + od*xj, ev = od+ev, od=0;
            cout << sum << endl;
        }
    }
}