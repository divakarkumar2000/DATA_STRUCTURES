/* Find the first occurence of an element in an array
   a[]={1,2,3,4,10,6,7,8,10}
   key = 10;
   Output = 4
*/

#include<bits/stdc++.h>
using namespace std;

/* First way*/
int firstOccur1(int *a,int n,int key,int index = 0)
{
    if(n == 0)
    {
        return -1;
    }
    if(a[index]==key)
    {
       return index;
    }
    return firstOccur1(a,n-1,key,index+1);
}

/* Second way */
int firstOccur2(int *a,int n,int key)
{
    if(n == 0)
    {
        return -1;
    }
    if(a[0]==key)
    {
        return 0;
    }
    int i = firstOccur2(a+1,n-1,key);
    if(i!=-1)
    {
        return i+1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int a[]={1,2,3,4,10,6,7,8,10};
    int n = sizeof(a)/sizeof(int);
    cout<<firstOccur1(a,n,10)<<endl;
    cout<<firstOccur2(a,n,10)<<endl;
    return 0;
}