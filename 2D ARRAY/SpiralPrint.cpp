#include<bits/stdc++.h>
using namespace std;
#define row 100
#define column 100
void spiralPrint(int a[row][column],int r,int c)
{
     int topRow=0;
     int bottomRow=r-1;
     int leftColumn=0;
     int rightColumn=c-1;
     while(leftColumn < rightColumn && topRow<bottomRow)
     {
            for(int j=leftColumn;j<=rightColumn;j++)
            {
                cout<<a[topRow][j]<<" ";
            }
            topRow++;
            for(int j=topRow;j<=bottomRow;j++)
            {
                cout<<a[j][rightColumn]<<" ";
            }
            rightColumn--;
            for(int j=rightColumn;j>=leftColumn;j--)
            {
                cout<<a[bottomRow][j]<<" ";
            }
            bottomRow--;
            for(int j=bottomRow;j>=topRow;j--)
            {
                cout<<a[j][leftColumn]<<" ";
            }
            leftColumn++;
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
        cout<<endl;
    }
    spiralPrint(a,r,c);
    return 0;
}