/*Three question in one problem
1. Find the smallest element index in the rotated array
2. Find the largest element index in the rotated array
3. Search an element in rotated array  https://www.geeksforgeeks.org/dsa/search-an-element-in-a-sorted-and-pivoted-array/
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int s,int e,int k)
{
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
    return -1;
}
  
int smallestElement(int a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s]<=a[e])
        {
            return s;
        }
        int m=s+ (e-s)/2;
        if(a[e]<a[m])
        {
            s=m+1;
        }
        else
        {
            e=m;
        }
    }
    return s;
}

/*Same way we can caulculate for largest*/

int searchElement(int a[],int n,int key)
{
    int p = smallestElement(a,n);
    if(a[p]==key)
    {
        return p;
    }
    if(a[p]==0)
    {
        return binarySearch(a,0,n-1,key);
    }
    if(a[0]<=key)
    {
        return binarySearch(a,0,p-1,key);
    }
        return binarySearch(a,p+1,n-1,key);
}


/*
Only in one iteration O(logn)
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int s=0;
        int e = n-1;
        while(s<=e)
        {
            int m = s + (e-s)/2;
            if(arr[m]==key)
            {
                return m;
            }
            else if(arr[s]<=arr[m])
            {
                if(arr[m]>key && key>=arr[s])
                {
                    e=m-1;
                }
                else
                {
                    s=m+1;
                }
            }
            else
            {
                if(arr[m]<key && key<=arr[e])
                {
                    s=m+1;
                }
                else
                {
                    e=m-1;
                }
            }
        }
        return -1;
        
    }
};
*/

int main()
{
    int a[]={3,4,5,6,7,8,9,20,1,2};
    int n = sizeof(a)/sizeof(int);
    cout<<searchElement(a,n,20)<<endl;
}
