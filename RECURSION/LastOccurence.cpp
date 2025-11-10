/*Last occurenece of an element in array
   a[]={1,2,3,4,10,6,7,8,10}
   key = 10;
   Output = 8
*/

#include<bits/stdc++.h>
using namespace std;

int lastOccurance(int *a,int n,int key)
{
    if(n == 0)
    {
        return -1;
    }
    if(a[n-1]==key)
    {
        return n-1;
    }
    return lastOccurance(a,n-1,key);
}

int main()
{
    int a[]={1,2,3,4,10,6,7,8,10};
    int n = sizeof(a)/sizeof(int);
    int b[]={0,1,2,3,4,2,6,7};
    int n1 = sizeof(b)/sizeof(int);
    cout<<lastOccurance(a,n,10)<<endl;
    cout<<lastOccurance(b,n1,2)<<endl;
    return 0;
}