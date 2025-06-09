/*
Problem Name: Rain Water Harvesting
Problem Difficulty: None
Problem Constraints: 1 <= N <= 10^6
Problem Description:
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1,
 Find the maximum water that she can save. 

Explanation for the Sample input Testcase:  
<img src="https://minio.cb.lk/img/ScHHWbX.jpg" alt="Elevation Map" height="150" width="300">  
 
So the total units of water she can save is 5 units

Input Format: First line contains an integer n. Second line contains n space separated integers representing the elevation map.
Sample Input: 10
0 2 1 3 0 1 2 1 2 1
Output Format: Print a single integer containing the maximum unit of waters she can save.
Sample Output: 5
*/

#include<bits/stdc++.h>
using namespace std;

//Basic approach
/*
int rainWaterHarvesting(int height[],int n)
{
        long long int ans = 0;
        for(int i=1;i<n-1;i++)
        {
            int leftmax=0;
            int rightmax=0;
            for(int j=0;j<i;j++)
            {
                leftmax = max(leftmax,height[j]);
            }
            if(height[i]>leftmax)
            {
                continue;
            }
            for(int k=i+1;k<n;k++)
            {
                rightmax = max(rightmax,height[k]);
            }
            if(leftmax>height[i] && rightmax>height[i])
            {
                int temp = min(leftmax,rightmax);
                ans +=(temp-height[i]);
            }
        }
        return ans;
}
*/
int rainWaterHarvesting(int height[],int n)
{
    long long int ans = 0;
    if(n<3)
    {
        return 0;
    }
    int leftmax[n-2];
    int rightmax[n-2];
    int lm=height[0];
    int rm=height[n-1];
    for(int i=1;i<n-1;i++)
    {
        leftmax[i-1]=lm;
        if(height[i]>lm)
        {
            lm=height[i];
        }
    }
    for(int i=n-2;i>0;i--)
    {
        rightmax[i-1]=rm;
        if(height[i]>rm)
        {
            rm=height[i];
        }
    }
    for(int i=1;i<n-1;i++)
    {
        if(height[i]<leftmax[i-1] && height[i]<rightmax[i-1])
        {
            ans+=(min(leftmax[i-1],rightmax[i-1])-height[i]);
        }
    }
    return ans;
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
    cout<<" \n Total Trapped water :\n"<<rainWaterHarvesting(a,n)<<endl;
    return 0;
}
