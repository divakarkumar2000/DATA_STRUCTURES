/*
You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Examples:

Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
[12] and [34, 67, 90] Maximum Pages = 191
[12, 34] and [67, 90] Maximum Pages = 157
[12, 34, 67] and [90] Maximum Pages = 113.
Therefore, the minimum of these cases is 113, which is selected as the output.
Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Allocation can not be done.
Input: arr[] = [22, 23, 67], k = 1
Output: 112
Constraints:
1 <=  arr.size() <= 106
1 <= arr[i] <= 103
1 <= k <= 103 
*/
#include<bits/stdc++.h>
using namespace std;
bool isValidBook(int a[],int n, int m,int k)
{
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>m)
        {
            student++;
            sum=a[i];
        }
        if(student>k)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[]={10,20,30,40};
    int n = sizeof(a)/sizeof(int);
    int k=2;
    int res=-1;
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        max= a[i]>max ? a[i] : max;
    }
    int s=max;
    int e=sum;
    while(s<=e)
    {
        int m = s + (e-s)/2;
        if(isValidBook(a,n,m,k))
        {
            res=m;
            e=m-1;
        }
        else
        {
            s=m+1;
        }
    }
    cout<<res<<endl;
    return 0;
}