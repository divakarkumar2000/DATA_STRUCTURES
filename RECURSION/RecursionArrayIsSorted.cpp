/*Check if array is sorted or not*/
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int a[],int n)
{
    if(n==0)
    {
        return true;
    }
    if(a[n]<a[n-1])
    {
        return false;
    }
    bool ans = isSorted(a,n-1);
    return ans;
}
int main()
{
    int a[5]={6,2,3,4,5};
    cout<<isSorted(a,5)<<endl;
    return 0;
}