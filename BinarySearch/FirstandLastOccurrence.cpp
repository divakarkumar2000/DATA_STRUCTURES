/*Binary Search */
/*
binary_search(arr.begin(), arr.end(), val)
lower_bound(arr1.begin(), arr1.end(), val)
upper_bound(arr1.begin(), arr1.end(), val)
  int binarySearch(int a[],int n,int key)
  {
     int s=0;
     int e=n-1;
     while(s<=e)
     {
        int m = s + (e-s)/2;
        if(a[m]==k)
        {
          return m;
        }
        else if(a[m]>k)
        {
           e = m-1;
        }
        else
        { 
          s = m +1;
        }
     }
  }
*/


/* Problem : Find first and last occurrence in a sorted array
   a[]={1,2,5,8,8,8,8,8,10,12,15,20}
   key = 8
   First occurrence  = 4
   Last occurence = 8
*/
int binarySearchFirst(int a[],int n,int k)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int m = s + (e-s)/2;
        if(a[m]==k)
        {
            ans=m;
            e =m-1;
        }
        else if(a[m]>k)
        {
            e = m-1;
        }
        else
        { 
            s = m +1;
        }
    }
    return ans;
}
int binarySearchLast(int a[],int n,int k)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int m = s + (e-s)/2;
        if(a[m]==k)
        {
            ans=m;
            s=m+1;
        }
        else if(a[m]>k)
        {
            e = m-1;
        }
        else
        { 
            s = m +1;
        }
    }
    return ans;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int key;
  cin>>key;
  cout<<binarySearchFirst(a,n,key)<<endl;
  cout<<binarySearchLast(a,n,key)<<endl;
  return 0;
}