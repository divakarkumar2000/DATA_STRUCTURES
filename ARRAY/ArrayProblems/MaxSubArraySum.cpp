/*
Problem Name: Maximum Subarray Sum
Problem Difficulty: None
Problem Constraints: 1 <= N <= 100000

1 <= t <= 20

-100000000 <= A[i] <= 100000000
Problem Description:
You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7. 

Input Format: The first line consists of number of test cases T. Each test case consists of two lines. <br>
The first line of each testcase contains a single integer N denoting the number of elements for the array A. <br> 
The second line of each testcase contains N space separated integers denoting the elements of the array.
Sample Input: 2
4
1 2 3 4
3
-10 5 10
Output Format: Output a single integer denoting the maximum subarray sum for each testcase in a new line.
Sample Output: 10
15
*/
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[],int n)
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

int main()
{
    int t;
    cin>>t;
    while(t)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];;
    }
    cout<<" \n Max Subarray Sum :\n"<<maxSubArraySum(a,n)<<endl;
    }
    return 0;
}
