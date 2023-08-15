#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
    
        int ans = 1e9;
        for (int b = 1; b < n - 1; b++)
        {
            int a = b - 1, c = b + 1;
            while (a >= 0 && c < n)
            {
                ans = min(ans, abs(arr[a] + arr[c] - 2 * arr[b]));
                if ((arr[b] - arr[a]) < (arr[c] - arr[b])) a--;
                else c++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}