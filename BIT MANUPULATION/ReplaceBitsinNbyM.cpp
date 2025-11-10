#include<bits/stdc++.h>
using namespace std;
/*Replace Bits in N by M
  You are given two 32-bit number, N and M, and two bit positions, i an j. Write
  a method to set all bits between i and j in N equal to M (e.g, M becomes a substring 
  of N located at i and starting at j.)

  Example:
  Input: N = 10000000000,
  M = 10101 , i =2 , j =6
  Output:N = 10001010100
*/
void clearBitsItoJ(int &n,int i,int j)
{
    int mask1 = ((~(0))<<(j+1));
    int mask2 = (1<<(i))-1;
    int mask = mask1 | mask2;
    n = n & mask;
}
void replaceBitsinNbyM(int &n,int m,int i,int j)
{
    clearBitsItoJ(n,i,j);
    n = n | (m<<i);
}
int main()
{
   int n =15;
   int i=1,j=3;
   int m =2;
   replaceBitsinNbyM(n,m,i,j);
   cout<<n<<endl;
}