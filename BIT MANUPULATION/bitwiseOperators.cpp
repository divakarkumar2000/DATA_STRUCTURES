/*Bit manupulation*/
/*AND  & */
/*OR   | */
/*XOR  ^ */
/*NOT  ~ */
/*left shift  << */
/*right shift >> */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5; /*00000101*/
    int b = 7; /*00000111*/
    /*&
     1 1 = 1
     0 1 = 0
     1 0 = 0
     0 0 = 1 
    */
    /* 5 & 7 = 101 & 111 = 101 -> 5*/
    cout<<(a&b)<<endl;
    /* |
     1 1 = 1
     0 1 = 1
     1 0 = 1
     0 0 = 0
    */
    /* 5 | 7 = 101 | 111 = 111 -> 7*/
    cout<<(a|b)<<endl;
    /* ^
       1 1 = 0
       0 1 = 1
       1 0 = 0
       0 0 = 1
    */
    /* 5 ^ 7 = 101 ^ 111 = 010 -> 2*/
    /* a^b^a = a */
    cout<<(a^b)<<endl;
    /* ~
     1 = 0
     0 = 1*/
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;

    /* left shift << 
       a<<3 = a * (2)^3
       5<<3 = 101 << 3 = 101000 -> 40

       a<<b = a * (2)^b
    */
    cout<<(a<<3)<<endl;
    
    /*right shift >> 
      b>>1 = b / (2)^1
      7>>1 = 111 >> 1 = 011 -> 3 = 7/2

      b>>a = b/(2)^a 
    */
    cout<<(b>>1)<<endl;
    return 0;
}