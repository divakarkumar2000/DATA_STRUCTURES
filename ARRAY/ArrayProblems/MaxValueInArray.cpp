/*Problem Name: Arrays-Max Value In Array
Problem Difficulty: None
Problem Constraints: N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.                                                                                                                                                                                                                                               

1.It reads a number N.

2.Take Another N numbers as input and store them in an Array.

3.calculate the max value in the array and return that value.

Input Format: First line contains integer n as size of array. Next n lines contains a single integer as element of array.
Sample Input: 4
2
8
6
4
Output Format: Print the required output.
Sample Output: 8*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=INT_MIN;
    for(auto x:a)
    {
        ans=max(x,ans);
    }
    cout<<"Max value in array : "<<ans<<endl;
    return 0;
}