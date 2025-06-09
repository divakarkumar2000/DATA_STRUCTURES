/*
Problem Name: Broken Calculator
Problem Difficulty: None
Problem Constraints: 1 < = N < = 500
Problem Description:
Andrew was attempting a mathematics test where he needed to solve problems with factorials.
One such problem had an answer which equaled 100! ,He wondered what would this number look like.
He tried to calculate 100! On his scientific calculator but failed to get a correct answer. 
Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format: a single lined integer N
Sample Input: 5
Output Format: Print the factorial of N
Sample Output: 120
*/

#include<bits/stdc++.h>
using namespace std;
#define max 10000
int multi(int x,int a[],int size)
{
    int carry=0;
    for(int i=0;i<size;i++)
    {
        int k = carry + a[i]*x;
        a[i]=k%10;
        carry=k/10;
    }
    while(carry)
    {
       a[size]=carry%10;
       carry=carry/10;
       size++;
    }
    return size;
}
string factOfN(int t)
{  
    int a[max];
    a[0]=1;
    int asize=1;
    for(int i=2;i<=t;i++)
    {
        asize=multi(i,a,asize);
    }
    string res="";
    for(int i=asize-1;i>=0;i--)
    {
        res+=to_string(a[i]);
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    string s = factOfN(t);
    cout<<s<<endl;
    return 0;
}