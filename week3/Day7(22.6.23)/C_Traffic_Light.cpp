#include <iostream>
#define ll long long
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;
int main() {
    fast
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        s = s + s;
    int last = -1;
    for (int i = 2 * n - 1; i >= n; i--) {
      if (s[i] == 'g') last = i;
    }
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'g') last = i;
      if (s[i] == c) ans = max(ans, last - i);
    }
    cout << ans << '\n';
    }
}