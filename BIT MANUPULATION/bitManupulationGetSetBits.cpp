#include<bits/stdc++.h>
using namespace std;
bool isOdd(int a)
{
    return a & 1 ? true : false;
}
/*Find ith bit from the right*/
int getBit(int n, int i)
{
    int mask = 1<<i;
    return (n & mask) > 0 ? 1 : 0;
}
void setBit(int &n,int i)
{
    int mask = 1<<i;
    n = n | mask;
}
void clearBit(int &n,int i)
{
    int mask = ~(1<<i);
    n = n & mask;
}
void updateBit(int &n,int i, int v)
{
    clearBit(n,i);
    n = n | (v<<i);
}
/*Set the ith bit from the right*/
int main()
{
    int a = 9;
    bool a1 = isOdd(a);
    cout<<"number is odd :"<<a1<<endl;
    int b = 8; /*1000*/
    cout<<"3 bit set or not :"<<getBit(b,3)<<endl;
    cout<<"2 bit set or not :"<<getBit(b,2)<<endl;
    /*set 2 bit of b .. 1000 -> 1100 = 12*/
    setBit(b,2);
    cout<<"Set 2 bit of 8 : "<<b<<endl;
    /*clear 2 bit of b .. 1100 -> 1000 = 8*/
    clearBit(b,2);
    cout<<"clear 2 bit of 12 : "<<b<<endl;
    clearBit(b,1);
    cout<<"clear 1 bit of 8 : "<<b<<endl;
    
    /* 8 = 1000 update 2 bit to 1 = 12*/
    updateBit(b,2,1);
    cout << b<< endl;
    /* 12 = 1100 update 3 bit to 0 = 0100 = 4*/
    updateBit(b,3,0);
    cout << b<< endl;
    return 0;
}