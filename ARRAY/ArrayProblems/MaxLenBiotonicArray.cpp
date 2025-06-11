/*
Problem Name: Maximum length Biotonic Subarray
Problem Difficulty: None
Problem Constraints: 1<=t<=100
1<=n<=1000000
Problem Description:
You are provided n numbers of array. You need to  find the maximum length of bitonic subarray.
 A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] ... <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

Input Format: First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers.
Sample Input: 2
6
12 4 78 90 45 23
4
40 30 20 10
Output Format: Print the maximum length.
Sample Output: 5
4
*/
#include<bits/stdc++.h>
using namespace std;

/*Brute force*/
int maxLenBiotonicArray(int a[],int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int k=i;
        int j=i;
        int res=1;
        while(k>0)
        {
            if(a[k]>=a[k-1])
            {
              res++;
            }
            else
            {
                break;
            }
            k--;
        }
        while(j<n-1)
        {
            if(a[j]>=a[j+1])
            {
                res++;
            }
            else
            {
                break;
            }
            j++;
        }
        ans=max(res,ans);
    }
    return ans;
}

/* TC O(n) SC O(n)*/
int maxLenBiotonicArray2(int a[],int n)
{
    int iarr[n] = {0};
    int darr[n] = {0};
    int res = 0;
    for(int i = 1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            res++;
            iarr[i]=res;
        }
        else{
            res=0;
        }
    }
    for(int i = n-2;i>=0;i--)
    {
        if(a[i]>=a[i+1])
        {
            res++;
            darr[i]=res;
        }
        else{
            res=0;
        }
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans=max(iarr[i]+darr[i],ans);
    }
    return ans+1;
}

/*TC O(n)  SC O(1)*/
int maxLenBiotonicArray3(int arr[],int n)
{
    int i =0;
    int start =0;
    int nextStart =0;
    int ans=INT_MIN;
    while(i<n-1)
    {
        while(i<n-1 && arr[i]<=arr[i+1])
        {
            i++;
        }
        while(i<n-1 && arr[i]>=arr[i+1])
        {
            if(arr[i]>arr[i+1])
            {
                nextStart = i + 1;
            }
            i++;
        }
        ans=max(ans,i-start+1);
        start=nextStart;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //cout<<maxLenBiotonicArray(a,n)<<endl; 
        cout<<maxLenBiotonicArray2(a,n)<<endl; 
        cout<<maxLenBiotonicArray3(a,n)<<endl; 
    } 
    return 0;
}