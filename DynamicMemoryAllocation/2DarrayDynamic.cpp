/* Creating 2D array Dynamically */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int **arr=NULL;
    int r,c;
    cin>>r>>c;
    arr = new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }
    int k=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]= k++;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        delete[]arr[i];
    }
    delete[] arr;
   return 0;
}