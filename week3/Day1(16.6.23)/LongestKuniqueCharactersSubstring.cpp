//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n=s.size();
    int i=0,j=0,ans=-1,cnt=0;
    unordered_map<char,int>m;
    while(j<n)
    {
        if(m[s[j]]==0) cnt++;
        m[s[j]]++;
        if(cnt>k)
        {
            while(cnt>k)
            {
                m[s[i]]--;
                if(m[s[i]]==0) cnt--;
                i++;
            }
        }
        if(cnt==k){
            ans = max(ans,j-i+1);
        }
        j++;
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends