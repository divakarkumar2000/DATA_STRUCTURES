#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Address Opeator -> gives hexadecimal number which is the memory location of the variable
    int a = 10;
    cout<<&a<<endl;
    float b = 20.5;
    cout<<&b<<endl;
    char c= 'A';
    cout<<&c<<endl;
    //Explicit typecasting to void from char
    cout<<(void *)& c<<endl;

    //Pointer
    int *ptr;
    ptr=&a;
    cout<<*ptr<< " "<<ptr<<" "<<&a<<endl;

    //we can reassign a pointer
    int k = 2;
    ptr = &k;

    //Double Pointer
    int x =1;
    int *p1 = &x;
    int **p2 = &p1;
    cout<<*p1<<endl;
    cout<<*p2<< " "<<**p2<<endl;
    
    return 0;
}