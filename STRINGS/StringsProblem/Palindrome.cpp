/*
Problem Name: Is Palindrome?
Problem Difficulty: None
Problem Constraints: None
Problem Description:
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format: Enter a number N , add N more numbers 
Sample Input: 4
1
2
2
1
Output Format: Display the Boolean result
Sample Output: true
*/
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int a[],int i,int j)
{
    if(i==j)
    {
        return true;
    }
    if(a[i]==a[j])
    {
        palindrome(a,i+1,j-1);
    }
    else
    {
        return false;
    }
    return true;
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
    if(palindrome(a,0,n-1))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
   }
   return 0;
}