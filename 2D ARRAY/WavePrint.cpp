#include<bits/stdc++.h>
using namespace std;

void wavePrint(int *a,int r, int c)
{
   for(int i=0;i<c;i++)
    {  
        int j=0;
        if(i%2!=0)
        {
           for(j=r-1;j>=0;j--)
           {
               cout<<*(a + j*c + i)<<" ";
           }
        }
        else
        {
          for(;j<r;j++)
           {
               cout<<*(a + j*c + i)<<" ";
           }
        }
        cout<<endl;
    }  
}
/*
void wavePrint(int *a,int r, int c)
{
   for(int i=0;i<c;i++)
    {  
        int j=0;
        if(i%2!=0)
        {
           for(j=r-1;j>=0;j--)
           {
               cout<<a[i][j]<<" ";
           }
        }
        else
        {
          for(;j<r;j++)
           {
               cout<<a[i][j]<<" ";
           }
        }
        cout<<endl;
    }  
}
*/
int main()
{
    int r,c;
    cin>>r;
    cin>>c;
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    wavePrint((int*)a,r,c);

    return 0;
}