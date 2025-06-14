/* Pass by value
   Pass by refernce -> in C++
   Pass by address or pointer is in C++ and C
*/
#include<bits/stdc++.h>
using namespace std;
/* Pass by Value
void swap(int a,int b)
{
   int temp = a;
   a = b;
   b = temp;
}
*/
/* Call by Pointer or Address
void swap(int *a,int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
*/
void swap(int &a,int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
int main()
{
    int a = 3;
    int b = 6;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}