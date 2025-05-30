#include<bits/stdc++.h>
using namespace std;
#define row 100
#define column 100
void rotateImage(int (*a)[column],int r,int c)
{
    //reverse every row
    for(int i =0;i<r;i++)
    {
    reverse(a[i],a[i]+c);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
           swap(a[i][j],a[j][i]);
        }
    }
}
int main()
{
    int r,c;
    cin>>r;
    cin>>c;
    int a[row][column];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<endl;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n After Rotate image in anticlockwise direction \n";
    rotateImage(a,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}