/*Write 2 function to Print First N numbers in
  --Increasing order
  --Decreasing order
*/
#include<bits/stdc++.h>
using namespace std;
/*Recursive way*/
/*increasing order*/
/*Top down*/
void printInIncreasing(int n)
{
    //Base Case
    if(n == (-1))
    {
       return;
    }
    printInIncreasing(n-1);
    cout<<n<<" ";
}

/*Bottom up*/
/*decreasing order*/
void printInDecreasing(int n)  
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    //Base Case
    if(n == (-1))
    {
       return;
    }
    cout<<n<<" ";
    printInDecreasing(n-1);
}

int main()
{
    int n;
    cin>>n;
    printInIncreasing(n);  
    cout<<endl;
    printInDecreasing(n);
    cout<<endl;
    return 0;
}
