/*FINDING LARGEST AND SMALLEST ELEMENT IN AN ARRAY*/
/*linear search */
#include<iostream>
#include<climits>
using namespace std;

int largeNum(int arr[],int n)
{
   int l = INT_MIN;
   for(int i=0;i<n;i++)
   {
     if(arr[i]>l)
     	l=arr[i];
   }
   return l;
}
int smallNum(int arr[],int n)
{
   int l = INT_MAX;
   for(int i=0;i<n;i++)
   {
     if(arr[i]<l)
     	l=arr[i];
   }
   return l;
}
int main()
{
   int arr[]={1,2,3,4,5,6,7};
   int n=sizeof(arr)/sizeof(int);;
   cout<< " Largest Number : "<<largeNum(arr,n);
   cout<< " Smallest Number : "<<largeNum(arr,n);
   return 0;
}
