#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
    int ans = 0;
    int pow = 1;
    while(n>0)
    {
        int k = n & 1;
        ans +=k*pow;
        pow=pow*10;
        n=n>>1;
    }
    return ans;
}
int main()
{
    cout<<decimalToBinary(9)<<endl;
    cout<<decimalToBinary(41)<<endl;
    cout<<decimalToBinary(15)<<endl;
    return 0;
}