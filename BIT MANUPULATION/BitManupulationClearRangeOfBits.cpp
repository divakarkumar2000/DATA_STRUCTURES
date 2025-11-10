#include<bits/stdc++.h>
using namespace std;
void clearLastIbits(int &n, int i)
{
    int mask = ((~(0)) << i);
    n = n & mask;
}
void clearRangeItoJ(int &n, int i,int j)
{
    int mask1 = ((~(0)) << j);
    
    int mask2 = (1<<(i-1))-1;

    int mask = mask1 | mask2;
    n =n &mask;
    
}
int main()
{
    int a = 63; /* 00111111*/
    /*clear last 3 bits 00111000 = 56*/
    clearLastIbits(a,3);
    cout<<a<<endl;
    a = 63; /* 00111111*/
    /* 3to5 clear it 00100011 = 35*/
    clearRangeItoJ(a,3,5);
    cout<<a<<endl;
    return 0;
}