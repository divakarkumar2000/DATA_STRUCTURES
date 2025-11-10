/* All Occurence of an element in an array
   a[]={1,2,3,4,10,6,7,8,10}
   key = 10;
   Output = 4,8
*/

#include<bits/stdc++.h>
using namespace std;

/* print all occurence*/
void allOccur(int *a, int n,int key,int i = 0)
{
     if(n == 0)
     {
        return;
     }
     if(a[i] == key)
     {
        cout<<i<<" ";
     }
     return allOccur(a,n-1,key,i+1);
}

/* store all occurence*/
void storeAllOccur(int *a,int *b,int n,int key,int i = 0,int &j)
{
     if(n == 0)
     {
        return;
     }
     if(a[i] == key)
     {
        b[j++]=i;
     }
     return storeAllOccur(a,b,n-1,key,i+1,j);
}
int main()
{
    int a[]={1,2,3,4,10,6,7,8,10};
    int n = sizeof(a)/sizeof(int);
    allOccur(a,n,10);
    cout<<endl;

    int b[100];
    int j =0;
    storeAllOccur(a,b,n,10,0,j);
    if(j==0)
    {
       cout<<"-1"<<endl;
    }
    else{
      for(int k=0;k<j;k++)
      {
         cout<<b[k]<<endl;
      }
    }

    return 0;
}