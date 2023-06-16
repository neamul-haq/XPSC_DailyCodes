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
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    ll t=1; cin >> t;
    while(t--) solve();
}

bool stringCheck(string s)
{
    string s2 = s;
    reverse(all(s2));
    return s2==s;
}

void solve()
{
    string s;
    cin >> s;
    ll ans = 0, x;
    cin >> x;
    ll totalMin = 0;
    string s3=s;
    string s2 = "";
    while (s2!=s3)
    {
        ll hour, min;
        hour = (s[0] - '0') * 10 + (s[1] - '0');
        min = (s[3] - '0') * 10 + (s[4] - '0');

        min += x;
        hour += (min / 60);
        hour%=24;
        min %= 60;

        s2 = "";

        if (hour < 10)
            s2 += '0';
        s2 += to_string(hour);
        s2 += ':';
        if (min < 10)
            s2 += '0';
        s2 += to_string(min);
        if (stringCheck(s2))  ans++;
        s=s2;
        totalMin += x;
    }
    print
}