/*Recursion is basically is a method where solution to a problem depends on solution of smaller instances of the same problem*/

/*Parts of Recursion Algorithm
  1. Base Case
  2. Recursive call ( to work towards Base Case)*/


/*
--------------------------------------------------------------------------------------------
Easiest Way to Approach to Recursive Problems
"Magical" Recursion Rule = Principle of Mathematical Induction (PMI)
--------------------------------------------------------------------------------------------
1) Figure out the Base Case
2) Assume Sub Problems can be soved by recursion (automatically)
3) Using the Sub-Problems write the answer for the current problem.

*/

/* Compute Factorial of N using Recursion*/
#if 0
  f(n)=n*f(n-1);
  n! = n * (n-1);
  if n == 0
  return 1;
#endif

/*
SC: O(n)
TC: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //recursive case
    return n*fact(n-1);
}

int main()
{
    int n = 5;
    int ans= fact(n);
    cout<<ans<<endl;
    return 0;
}