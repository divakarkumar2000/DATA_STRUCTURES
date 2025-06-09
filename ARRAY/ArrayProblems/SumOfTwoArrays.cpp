/*Problem Name: Arrays-Sum Of Two Arrays
Problem Difficulty: None
Problem Constraints: Length of Array should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input M, the size of second array and take M more inputs and store that in second array.
 Write a function that returns the sum of two arrays. Print the value returned.

Input Format: 
Sample Input: 4
1 0 2 9
5
3 4 5 6 7
Output Format: 
Sample Output: 3, 5, 5, 9, 6, END*/
#include<bits/stdc++.h>
using namespace std;

long long int arrayTwoNum(int a[],int n)
{
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
       ans = ans*10 + a[i];
    }
    return ans;
}
long long int sumOfTwoArray(int a[],int n,int b[], int m)
{
    long long int num1;
    long long int num2;
    
    num1=arrayTwoNum(a,n);
    num2=arrayTwoNum(b,m);

    return num1 + num2;
}
/*Add method or carry method*/
long long int carryMethod(int a[],int n,int b[], int m)
{
    int k = n>m ? n:m;
    int temp =k;
    int c[k];
    k=k-1;
    int i=n-1;int j=m-1;
    int carry=0;
    while(k>=0)
    {
        int sum =0; 
        if(i>=0 && j>=0)
        {
           sum = sum + a[i] + b[j] + carry;
        }
        else if(i>=0 && j<0)
        {
            sum = sum + a[i] + carry;
        }
        else if(i<0 && j<=0)
        {
            sum = sum + b[j] + carry;
        }
        int key = sum%10;
        carry = sum/10;
        c[k]=key;
        k--;
        i--;
        j--;
    }
    long long int ans=0;
    if(carry>0)
    {
     ans = carry;
    }
    for(int i=0;i<temp;i++)
    {
       ans = ans*10 + c[i];
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
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];;
    }
    cout<<" \n Sum :\n"<<carryMethod(a,n,b,m)<<endl;
    }
    return 0;
}
