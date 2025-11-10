/*Binary search using recursion*/
#include<bits/stdc++.h>
using namespace std;

int binarySearchRec(int a[],int s,int e,int key)
{
    if(s>e)
    {
       return -1;
    }
    int m = s + (e-s)/2;
    if(key==a[m])
    {
        return m;
    }
    else if(key>a[m])
    {
        return binarySearchRec(a,m+1,e,key);
    }
    else
    {
        return binarySearchRec(a,s,m-1,key);
    }
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    cout<<binarySearchRec(a,0,5,6)<<endl;
    return 0;
}