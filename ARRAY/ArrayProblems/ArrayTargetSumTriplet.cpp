/*Problem Name: Arrays-Target Sum Triplets
Problem Difficulty: None
Problem Constraints: Length of Array should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.

Input Format: First line contains input N. <br> Next line contains N space separated integers denoting the elements of the array. <br> The third line contains a single integer T denoting the target element.
Sample Input: 9
5 7 9 1 2 4 6 8 3
10
Output Format: Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.
Sample Output: 1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5
*/
#include<bits/stdc++.h>
using namespace std;

void sumTriplet(int a[],int n,int key)
{
    int k=0;
    while(k<n-2)
    {
        int target = key-a[k];
        int i=k+1;int j=n-1;
        while(i<j)
        {
            int num = a[i]+a[j];
            if(num==target)
            {
            cout<<a[k]<<" "<<a[i]<<" "<<a[j]<<endl;
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
        k++;
    }
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
    int target;
    cin>>target;
    sort(a,a+n);
    sumTriplet(a,n,target);
    return 0;
}
