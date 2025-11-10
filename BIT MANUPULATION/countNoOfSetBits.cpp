#include<bits/stdc++.h>
using namespace std;
int setBits1(int n)
{
    int ans=0;
    while(n>0)
    {
        int k = n & 1;
        if(k)
        {
            ans++;
        }
        n = n >> 1;
    }
    return ans;
}
/* optimize */
int setBits2(int n)
{
    int ans=0;
    while(n>0)
    {
       n = n & (n-1);
       ans++;
    }
    return ans;
}
int main()
{
   cout<<setBits1(15)<<endl;
    cout<<setBits1(16)<<endl; 
    cout<<setBits2(15)<<endl;
    cout<<setBits2(16)<<endl;
    return 0;
}