/*Problem statement : Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
   cout<<(5^5)<<endl;
   cout<<(0^7)<<endl;
   /*a^a = 0
     0^b= b
     a^b^a = b
   */
   int a[]={1,3,1,2,2,4,5,5,4};
   int e=0;
   int n = sizeof(a)/sizeof(int);
   for(int i=0;i<n;i++)
   {
      e = e^a[i];
   }
   cout<<"Unique Number : "<<e<<endl;
   return 0;
}
