/*
Problem Name: Finding CB Numbers
Problem Difficulty: 1
Problem Constraints: 1 <= Length of strings of digits <= 17


Problem Description:
Deepak and Gautam are having a discussion on a new type of number that they call Coding Blocks Number or CB Number. They use following criteria to define a CB Number.

1. 0 and 1 are not a CB number.
2. 2,3,5,7,11,13,17,19,23,29 are CB numbers.
3. Any number not divisible by the numbers in point 2( Given above) are also CB numbers.

Deepak said he loved CB numbers.Hearing it, Gautam throws a challenge to him.

Gautam will give Deepak a string of digits. Deepak's task is to find the number of CB numbers in the string. 
- CB number once detected should not be sub-string or super-string of any other CB number. <br>
Ex- In **4991**, both **499** and **991** are CB numbers but you can choose either **499** or **991**, not both.

- Further, the CB number formed can only be a sub-string of the string.<br>
Ex - In **481**, you can not take **41** as CB number because 41 is not a sub-string of **481**.

As there can be multiple solutions, Gautam asks Deepak to find the maximum number of CB numbers that can be formed from the given string.

Deepak has to take class of Launchpad students. Help him by solving Gautam's challenge. 



Input Format: First line contain size of the string.

Next line is A string of digits.


Sample Input: 5
81615
Output Format: Maximum number of CB numbers that can be formed.

Sample Output: 2
*/

#include<bits/stdc++.h>
using namespace std;
int a[]={2,3,5,7,11,13,17,19,23,29};
int n = sizeof(a)/sizeof(int);
bool isValidCB(string s)
{
    long long c = stoll(s);
    if(c==0 || c==1)
    {
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(c==a[i])
        {
            return true;
        }
        if(c%a[i]==0)
        {
            return false;
        }
    }
    return true;
}
int cbNum(string s)
{
    int n1 = s.length();
    int i =0;
    int j =0;
    int ans=0;
    while(j<n1-1)
    {
        i =j;
        string temp = "";
        while(i<n1)
        {
            temp+=s[i];
            if(isValidCB(temp))
            {
                ans++;
                j=i+1;
                break;
            }
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<cbNum(s)<<endl;
    return 0;
}