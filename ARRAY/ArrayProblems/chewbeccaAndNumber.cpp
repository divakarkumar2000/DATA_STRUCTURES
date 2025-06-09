/*
Problem Name: Chewbacca and Number
Problem Difficulty: 1
Problem Constraints: x <= 100000000000000000
Problem Description:
Luke Skywalker gave Chewbacca an integer number x. 
Chewbacca isn't good at numbers but he loves inverting digits in them. 
Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some
 (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format: The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.
Sample Input: 4545
Output Format: Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
Sample Output: 4444
*/
#include<bits/stdc++.h>
using namespace std;
 
unsigned long long int chewbeccaAndNumber(unsigned long long int t)
{
    unsigned long long ans = 0;
    unsigned long long mul = 1;
    while(t>0)
    {
        int k=t%10;
        if(9-k<k && !(t<10 && k==9))
        {
           k=9-k;
        }
        ans=ans + k*mul;
        t=t/10;
        mul=mul*10;
    }
    return ans;
}
 
int main()
{
    unsigned long long int t;
    cin>>t;
    cout<<chewbeccaAndNumber(t)<<endl;
    return 0;
}