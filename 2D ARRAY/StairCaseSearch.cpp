#include<bits/stdc++.h>
using namespace std;
#define row 100
#define column 100
bool stairCaseSearch(int a[row][column],int r,int c,int target)
{
    int i=0;
    int j=c-1;
    while(i<r && j>0)
    {
        if(a[i][j]<target)
        {
            i++;
        }
        else if(a[i][j]>target)
        {
            j--;
        }
        else
        {
            return true;
        }
    }
    return false;
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
    int target;
    cin>>target;
    if(stairCaseSearch(a,r,c,target))
    {
        cout<<"Target Found"<<endl;

    }
    else
    {
        cout<<"Target Not Found"<<endl;
    }
    return 0;
}