#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int a[10]={1,2,3,4};
    //cout<<a<<endl;
    /* one Difference between integer and character arrays is when we cout the 'a' we 
    get starting address in case of integer and print string in case of character */
    
    char a[10]={'a','b','c','d','\0'};
    // every time u declare the character like this u have to end the character with '\0' 
    cout<<a<<endl;

    char b[10]="abcd"; // its declare with auto '\0'
    cout<<sizeof(a)<<endl; // 10
    cout<<sizeof(b)<<endl; // 10 

    // when u input a string its automatically allocate '\0' at the end of string
    /*char c[10];
    cin >>c;
    cout<<c<<endl;*/
    char s1[]={'h','e','l','l','o'};
    char s2[]="hello";
    char s3[]={'a','b','c'};
    cout<<s1<<" "<<sizeof(s1)<<endl;
    cout<<s2<<" "<<sizeof(s2)<<endl;
    cout<<s3<<" "<<sizeof(s3)<<endl;
    /*Output:
      helloabcd 5
      hello 6
      abchello 3
    */
   // for s1 cout s1 is print upto when it not found a null character , size is already defined at decleartion
   // for s2 '\0' hence size is six

    return 0;
}