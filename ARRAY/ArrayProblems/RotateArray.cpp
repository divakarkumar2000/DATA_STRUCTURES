/*
 Rotate an array by k position
 eg: 1 2 3 4 5
 k = 2
 output: 4 5 1 2 3
*/

/* U can solve it by shifitng element TC : O(k*n)*/

/* Using another array TC :O(n) SC: O(n)*/

/*using reverse method
reverse the array
1 2 3 4 5
5 4 3 2 1
5 4 || 3 2 1
4 5 || 3 2 1
4 5 1 2 3
*/

#include<bits/stdc++.h>
using namespace std;
void rotateArray(int a[],int n,int k)
{
    k = k%n;
    if(k!=0)
    {
        reverse(a,a+n);
        reverse(a,a+k);
        reverse(a+k,a+n);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    rotateArray(a,n,k);
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    return 0;
}