/*sqrt of a number and upto certain precision*/
#include<bits/stdc++.h>
using namespace std;
float sqareRoot(int n, int p)
{
    int s=0;
    int e=n;
    float ans = -1;
    while(s<=e)
    {
        int m = s + (e-s)/2;
        if(m*m==n)
        {
            ans = m;
            break;
        }
        if(m*m<=n)
        {
           ans =m;
           s=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    float factor = 0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans<=n)
        {
        ans=ans+factor;
        }
        ans=ans-factor;
        factor=factor/10;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p;
        cin>>p;
        cout<<"Square root of number : "<<n<<" is -> "<<sqareRoot(n,p)<<endl;
    }
    return 0;
}