/* string abc 
   subset {},a,b,c,ab,bc,ca,abc
*/
#include<bits/stdc++.h>
using namespace std;

string filter(int n,string a)
{
   string ans = "";
   int i=0;
   while(n>0)
   {
      if(n&1)
      {
         ans.push_back(a[i]);
      }
      i++;
      n=n>>1;
   }
   return ans;
}
int main()
{
   string a = "abc";
   int k = a.length();
   int x = (1<<k)-1;
   vector<string>ans;
   while(x)
   {
      string temp = filter(x,a);
      ans.push_back(temp);
      x--;
   }
   string empty="";
   ans.push_back(empty);
   for(auto x:ans)
   {
      cout<<x<<" "<<endl;
   }
   return 0;
}