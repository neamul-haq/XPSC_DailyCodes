#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()

string result = "meow";

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string us = "";
        us.push_back(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i - 1]) {
                us.push_back(s[i]);
            }
        }
        cout << (result == us ? "YES" : "NO") << '\n';
    }
    return 0;
}