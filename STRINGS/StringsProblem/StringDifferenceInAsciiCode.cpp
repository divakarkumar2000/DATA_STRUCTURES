/*
Problem Name: Strings-Difference in Ascii Codes
Problem Difficulty: None
Problem Constraints: Length of String should be between 2 to 1000.
Problem Description:
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format: String
Sample Input: acb
Output Format: String
Sample Output: a2c-1b
*/

#include<bits/stdc++.h>
using namespace std;

string asciiCodes(string a)
{
   int n = a.length();
   string ans;
   int i =0;
   for(;i<n-1;i++)
   {
      ans+=a[i];
      ans+=to_string(int(a[i+1])-int(a[i]));
   }
   ans.push_back(a[n-1]);
   return ans;
}

int main()
{
    string a;
    cin>>a;
    string res = asciiCodes(a);
    cout<<res<<endl;
}