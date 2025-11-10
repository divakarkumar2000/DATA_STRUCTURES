/* Write a Recursive Function to multiply Two Numbers (a,b) without using * operator*/
#include<bits/stdc++.h>
using namespace std;
long long int mul(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    return a + mul(a,b-1);
}
int main()
{
   cout<<mul(6,7)<<endl;
   return 0;
}