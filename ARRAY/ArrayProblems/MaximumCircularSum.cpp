/*
Problem Name: Maximum Circular Sum
Problem Difficulty: None
Problem Constraints: 1<=t<=100 <br>
1<=n<=1000 <br>
|A<sub>i</sub>| <= 10000
Problem Description:
You are provided n numbers (both +ve and -ve).  Numbers are arranged in a circular form. You need to  find the maximum sum of consecutive numbers.


Input Format: First line contains integer t which is number of test case.<br>
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.
Sample Input: 1
7
8 -8 9 -9 10 -11 12

Output Format: Print the maximum circular sum for each testcase in a new line.

Sample Output: 22
*/
#include<bits/stdc++.h>
using namespace std;

/*Brute force rotate an array by one positon
  1 2 3 4 5
  5 1 2 3 4
*/
void rotateArrayB1(int a[],int n)
{
    int k = a[n-1];
    for(int i=n-1;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=k;
}
/*Brute Force O(n^3)*/
int maxCircularSubArraySum1(int a[],int n)
{
    int ans=INT_MIN;
    int k = n;
    while(k--)
    {
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=i;j<n;j++)
            {
                sum+=a[j];
                ans = max(sum,ans);
            }
        }
        rotateArrayB1(a,n);
    }
    return ans;
}
/* Max sum subarray */
int kadaneAlgoMax(int a[],int n)
{
    int sum=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        ans=max(sum,ans);
        if(sum<0)
        {
            sum=0;
        }
    }
    return ans;
}

/* Min sum subarray */
int kadaneAlgoMin(int a[],int n)
{
    int sum=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        ans=min(sum,ans);
        if(sum>0)
        {
            sum=0;
        }
    }
    return ans;
}

/*Brute Force O(n^2) using kadane algo*/
int maxCircularSubArraySum2(int a[],int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int res =kadaneAlgoMax(a,n);
        ans=max(res,ans);
        rotateArrayB1(a,n);
    }

    return ans;
}

/* Circular array sum by minimum sum method 
 if an subarray having maximum sum then subarray remained has the minimum sum
*/
int maxCircularSubArraySum3(int a[],int n)
{
    int res1=kadaneAlgoMax(a,n);
    if(res1<=0)
    {
        return res1;
    }
    int res2=kadaneAlgoMin(a,n);
    int tsum=0;
    for(int i=0;i<n;i++)
    {
        tsum+=a[i];
    }
    return max(res1,tsum-res2);
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];;
    }
    cout<<"Max Subarray Sum : "<<maxCircularSubArraySum1(a,n)<<endl;
    cout<<"Max Subarray Sum : "<<maxCircularSubArraySum2(a,n)<<endl;
    cout<<"Max Subarray Sum : "<<maxCircularSubArraySum2(a,n)<<endl;
    return 0;
}
