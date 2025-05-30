#include<bits/stdc++.h>
using namespace std;
#define row 100
#define column 100
void piyush(char a[row][column],int r,int c,int strength, int key)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(strength<key)
            {
                cout<<"Piyush will not make it"<<endl;
            }
            if(a[i][j]=='.')
            {
                strength-=2;
            }
            else if(a[i][j]=='*')
            {
                strength+=5;
            }
            else if(a[i][j]=='#')
            {
                strength--;
                break;
            }
            if(j!=0)
            {
               strength--;
            }
        }
    }
    cout<<"piyush will out of the park !! congratulations !! and also have strength = "<<strength<<endl;
}
int main()
{
     int r,c,strength,key;
    cin>>r;
    cin>>c;
    cin>>strength;
    cin>>key;
    char a[row][column];
    cin.get();
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    piyush(a,r,c,strength,key);
    return 0;
}