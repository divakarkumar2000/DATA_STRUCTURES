#include<bits/stdc++.h>
using namespace std;
/*TC : log(n)*/
int powerofnumber(int n,int m)
{
   int ans=1;
   while(m>0)
   {
    if(m & 1)
    {
        ans = ans*n;
    }
    n = n*n;
    m = m>>1;
   }
   return ans;
}
int main()
{
   int n,m;
   cin>>n>>m;
   cout<<"Power of number :"<<powerofnumber(n,m)<<endl;
   return 0;
}