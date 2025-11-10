/* Fibonacci Series
   0,1,1,2,3,5,8,13,............
   F(0) = 0, F(1) = 1
   F(n) = F(n - 1) + F(n - 2), for n > 1
*/

/* Recursive Program */

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    //Base condition
    if(n==0 || n==1)
    {
        return n;
    }
    //Recursive Case
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}