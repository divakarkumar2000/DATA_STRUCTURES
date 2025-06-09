/*Problem Name: Arrays-Target Sum Pairs
Problem Difficulty: None
Problem Constraints: Length of the arrays should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format: The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.
Sample Input: 5
1
3
4
2
5
5
Output Format: Print all the pairs of numbers which sum to target. Print each pair in increasing order.
Sample Output: 1 and 4
2 and 3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];;
    }
    int target;
    cin>>target;
    sort(a,a+n);
    int i=0;int j=n-1;
    while(i<j)
    {
        int num = a[i]+a[j];
        if(num==target)
        {
           cout<<a[i]<<" "<<a[j]<<endl;
           i++;
           j--;
        }
        else if(num>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
