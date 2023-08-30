#include<bits/stdc++.h>
using namespace std;
//O(N^3)
/*void gen_sub(int array[],int size)
{
    int maxsum=INT_MIN;
    //to save the index of the maximum array
    int left=0;
    int right=0;
  for(int i=0;i<size;i++)
  {
    for(int j=i;j<size;j++)
    {
        int currsum=0;
        for(int k=i;k<=j;k++)
        {
            currsum+=array[k];
        }
        if(currsum>maxsum)
        {
            maxsum=currsum;
            left=i;
            right=j;
        }
    }
  }
  for(int i=left;i<=right;i++)
  {
    cout<<array[i]<<" ";
  }
}*/
//O(N^2+N)
/*     for(int k=i;k<=j;k++)
        {
            currsum+=array[k];
        }
        Instead of doing this we can do like this
        make sumarray which stores the total sum of the index at every index
        Ex: 1 2 -3 5 7 -9 8
      csum: 1 3  0 5 12 3 11
      commulative sum   
        if we want calculate subarray starting from the ex i=3 index
        subarrray : 5
                    5,7
                    5,7,-9
                    5,7,-9,8
                lets take 5,7,-9
                total sum of array upto -9  subtract total sum upto -3
                sum=csum[j]-csum[i-1];(as per code)
*/
void gen_sub(int array[],int size)
{
    int maxsum=INT_MIN;
    int left=0;
    int right=0;
    int csum[size];
    int tsum=0,mainsum=0;
    // making csum array
    for(int i=0;i<size;i++)
    {
       tsum+=array[i];
       csum[i]=tsum;
    }

  for(int i=0;i<size;i++)
  {
    for(int j=i;j<size;j++)
    {
        mainsum=csum[j]-csum[i-1];
        if(mainsum>maxsum)
        {
            maxsum=mainsum;
            left=i;
            right=j;
        }
    }
  }
  for(int i=left;i<=right;i++)
  {
    cout<<array[i]<<" ";
  }
}
int main()
{
   int array[]={-4,3,1,-2,6,2,-4,-1,-7};
   gen_sub(array,9);
   return 0;
}