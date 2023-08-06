#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) (x).begin(), (x).end()
void answer();

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) answer();    
}

void answer() {
    ll n, k; cin >> n >> k;
    string s1, s2; cin >> s1 >> s2;

    ll i = 0;
    while (i < n) {
        if (s1[i] != s2[i] and i < k and i + k >= n){
            cout << "NO" << endl;
            return;
        }
        i++;
    }

    sort(all(s1));
    sort(all(s2));

    if (s1 != s2) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}