#include<bits/stdc++.h>
using namespace std;
// A sample problem 
// https://leetcode.com/problems/container-with-most-water/description/
// in a sorted array find a pair who sum is equal to k 
// 2 pointer approach
void pair_sum(int array[],int size , int k)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        int sum = array[i]+array[j];
        if(sum<k)
        {
            i++;
        }
        else if(sum>k)
        {
            j--;
        }
        else
        {
            cout << " Pair is " << array[i] << ","<<array[j]<<endl;
            return;
        }
    }
    cout<<"Pair not found";
    
}
int main()
{
  int array[]={-1,0,3,4,6,8};
  pair_sum(array,6,13);
  return 0;
}