#include<bits/stdc++.h>
using namespace std;
//O(N^3)
/*void max_sum(int array[],int size)
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
  cout <<" \n MAXIMUM SUM :" << maxsum <<endl;
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
/*void max_sum(int array[],int size)
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
  cout <<" \n MAXIMUM SUM :" << maxsum <<endl;
  for(int i=left;i<=right;i++)
  {
    cout<<array[i]<<" ";
  }
}*/
/*TC O(N)
Initialize the variables max_so_far = INT_MIN and max_ending_here = 0
Run a for loop from 0 to N-1 and for each index i: 
Add the arr[i] to max_ending_here.
If  max_so_far is less than max_ending_here then update max_so_far  to max_ending_here.
If max_ending_here < 0 then update max_ending_here = 0
Return max_so_far
*/
void max_sum(int a[],int size)
{
  int maxsum=INT_MIN;
  int currsum=0;
  int i=0;
  while(i<size)
  {
    currsum+=a[i];
    if(maxsum<currsum)
    {
      maxsum=currsum;
    }
    if(currsum<0)
    {
      currsum=0;
    }
    i++;
  }
  cout <<" \n MAXIMUM SUM :" << maxsum <<endl;
}
int main()
{
   int array[]={5,4,-1,7,8};
   max_sum(array,5);
   return 0;
}