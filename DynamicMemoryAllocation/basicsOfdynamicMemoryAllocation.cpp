/*Compile-Time Memory Allocation or static allocation 
Definition:
Compile-time allocation means memory is reserved during compilation, before the program runs. This is done by the compiler for:

Global variables

Static variables

Local variables (on the stack, with fixed size)
*/

/*Dynamic Memory Alocation*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* in c
      int *p = (int *)malloc(1*sizeof(int));
      int *p = (int *)calloc(1,sizeof(int));
      int *p = (int *)realloc(p,2*sizeof(int));
      free(p);
    */
    int *p = new int;
    int *arr = new int[5]{0};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete p;
    delete[] arr;
}


/*
  what is the output
  int *foo()
  {
     int a[]={1,2,3,4,5};
     cout<<a<<endl;
     cout<<a[0]<<endl;
     return a;
  }
   main()
   {
     int *b = foo();
     cout<<b<<endl;
     cout<<b[0]<<endl;
     return 0;
   }
*/