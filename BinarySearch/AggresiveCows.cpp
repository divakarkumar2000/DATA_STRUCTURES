/*Aggresive cows
You are given an array with unique elements of stalls[], which denote the position of a stall. 
You are also given an integer k which denotes the number of aggressive cows. 

Your task is to assign stalls to k cows such that the 
minimum distance between any two of them is the maximum possible.

Examples :

Input: stalls[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows, in this case, is 3, which also is the largest among all possible ways.
Input: stalls[] = [10, 1, 2, 7, 5], k = 3
Output: 4
Explanation: The first cow can be placed at stalls[0],
the second cow can be placed at stalls[1] and
the third cow can be placed at stalls[4].
The minimum distance between cows, in this case, is 4, which also is the largest among all possible ways.
Input: stalls[] = [2, 12, 11, 3, 26, 7], k = 5
Output: 1
Explanation: Each cow can be placed in any of the stalls, as the no. of stalls are exactly equal to the number of cows.
The minimum distance between cows, in this case, is 1, which also is the largest among all possible ways.
*/


/*Brute Force
class Solution {
  public:
    bool isValidCowSepration(vector<int> &stalls,int n,int i,int k)
    {
        int count = 1;
        int pow = 0;
        for(int j=1;j<n;j++)
        {
            if(stalls[j]-stalls[pow]>=i)
            {
                pow = j;
                count++;
            }
        }
        return count>=k;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
         sort(stalls.begin(),stalls.end());
         int res = 0;
         int n = stalls.size();
         int minSep=1;
         int maxSep=stalls[n-1]-stalls[0];
         for(int i=minSep;i<=maxSep;i++)
         {
             if(isValidCowSepration(stalls,n,i,k))
             {
                 res=i;
             }
         }
         return res;
    }
};
*/

#include<bits/stdc++.h>
using namespace std;

bool canPlaceCows(int a[],int n,int m,int k)
{
    int count=1;
    int lastCow=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[lastCow]>=m)
        {
            count++;
            lastCow=i;
            if(count==k)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a[]={1,2,4,8,9};
    int n = sizeof(a)/sizeof(int);
    int k=3;
    int s=0;
    int e=a[n-1]-a[0];
    int res=-1;
    while(s<=e)
    {
        int m = s + (e-s)/2;
        if(canPlaceCows(a,n,m,k))
        {
            res=m;
            s=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    cout<<res<<endl;
    return 0;
}
