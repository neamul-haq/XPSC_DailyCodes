#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int n,m;                cin>>n>>m;
      string s;               cin>>s;

      s="#"+s;

      vector<int> pref(n+2,0);
      for(int i=1;i<=n;i++){
         pref[i]=pref[i-1]+(s[i]-'0');
      }

      vector<int> prev0(n+2),prev1(n+2);
      vector<int> next0(n+2),next1(n+2);

      int zero=-1,one=-1;
      for(int i=1;i<=n;i++){
         prev0[i]=zero;
         prev1[i]=one;
         if(s[i]=='1'){
            one=i;
         }
         else{
            zero=i;
         }
      }

      zero=-1,one=-1;
      for(int i=n;i>0;i--){
         next0[i]=zero;
         next1[i]=one;
         if(s[i]=='1'){
            one=i;
         }
         else{
            zero=i;
         }
      }

      set<pair<int,int>> res;

      auto isOK=[&](int l,int r)->bool{
         int ones=pref[r]-pref[l-1];
         if(ones==0 or ones==r-l+1)return true;
         if(pref[r]-pref[r-ones]==ones)return true;
         return false;
      };

      for(int i=1;i<=m;i++){
         int l,r;             cin>>l>>r;

         if(isOK(l,r)){
            res.insert({-1,-1});
         }
         else{
            int left,right;
            if(next0[r]==-1){
               right=n;
            }
            else{
               right=next0[r]-1;
            }

            if(prev1[l]==-1){
               left=1;
            }
            else{
               left=prev1[l]+1;
            }

            res.insert({left,right});
         }
      }

      

      cout<<res.size()<<endl;
   }
   return 0;
}