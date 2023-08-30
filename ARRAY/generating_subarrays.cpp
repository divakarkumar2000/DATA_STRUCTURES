/*A subarray of an array is a contiguous sequence of elements within that array.
 In other words, a subarray is formed by selecting a range of elements from the original array
  while maintaining their order.

For example, consider the array [1, 2, 3, 4]. The subarrays of this array would be: 
[1], [2], [3], [4], [1, 2], [2, 3], [3, 4], [1,2,3] , [2,3,4] and [1, 2, 3, 4], 
along with the empty subarray [].
*/
#include<bits/stdc++.h>
using namespace std;

//O(N^3) BRUTE FORCE
void gen_sub(int array[],int size)
{
  for(int i=0;i<size;i++)
  {
    for(int j=i;j<size;j++)
    {
        // printing the ELEMENT
        cout<<"[ ";
        for(int k=i;k<=j;k++)
        {
            cout<<array[k]<<" ";
        }
        cout<<"]"<<endl;
    }
  }
}
int main()
{
   int array[]={1,2,3,4,5};
   gen_sub(array,5);
   return 0;
}