/*Write a Recursive function to perform power (a,n)*/
#include<bits/stdc++.h>
using namespace std;
long long int recPower(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return (recPower(a,n/2)*recPower(a,n/2));
    }
    else{
        return a * (recPower(a,n/2)*recPower(a,n/2));
    }
}
int main()
{
   cout<<recPower(3,5)<<endl;
   return 0;
}