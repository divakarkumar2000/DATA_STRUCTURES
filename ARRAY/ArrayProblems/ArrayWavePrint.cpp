/*Problem Name: Arrays-Wave print Column Wise
Problem Difficulty: None
Problem Constraints: Both M and N are between 1 to 10.
Problem Description:
Take as input a two-d array. Wave print it column-wise.

Input Format: Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Sample Input: 4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Output Format: All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).
Sample Output: 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END*/

#include<bits/stdc++.h>
using namespace std;
#define row 100
#define column 100
void waveArray(int a[row][column],int r,int c)
{
    int j=0;
    while(j<c)
    {
        if(j%2==0)
        {
           for(int i=0;i<r;i++)
           {
            cout<<a[i][j]<<" ";
           } 
        }
        else{
           for(int i=r-1;i>=0;i--)
           {
            cout<<a[i][j]<<" ";
           } 
        }
        j++;
    }
    cout<<"END";
}
int main()
{
    int r;int c;
    cin>>r>>c;
    cin.get();
    int arr[row][column];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    waveArray(arr,r,c);
    return 0;
}