#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];
    int arr[2][n + 1];
    arr[0][n] = 1;
    arr[1][n] = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[0][i] == 'B')
        {
            arr[0][i] = 1;
        }
        else
        {
            arr[0][i] = 0;
        }
        if (s[1][i] == 'B')
        {
            arr[1][i] = 1;
        }
        else
        {
            arr[1][i] = 0;
        }
    }
    int row = 0;
    for (int col = 0; col <= n; col++)
    {
        if (col == n)
        {
            cout << "YES" << nl;
            return;
        }
        if ((arr[0][col] == 1) && ((arr[1][col] == 1)))
        {
            row = row ^ 1;
        }
        if (arr[row][col] == 0)
        {
            break;
        }
    }
    row = 1;
    for (int col = 0; col <= n; col++)
    {
        if (col == n)
        {
            cout << "YES" << nl;
            return;
        }
        if ((arr[0][col] == 1) && ((arr[1][col] == 1)))
        {
            row = row ^ 1;
        }
        if (arr[row][col] == 0)
        {
            break;
        }
    }
    cout << "NO" << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
