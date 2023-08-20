#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n , int key)
{
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int m=s+(e-s)/2;
		if(key==arr[m])
		{
          return m;
		}
        else if(key>arr[m])
		{
          s=m+1;
		}
		else
		{
		  e=m-1;
		}
	}
	return -1;
}
int main()
{
   int size,key;
	cout<<"Enter size: ";
	cin>>size;


	int a[size];
    cout<<"Element of the array :";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a key : ";
	cin>>key;
	int ans= binarysearch(a,size,key);
	if(ans==-1)
	{
		cout<<"\nKey not found and not present in the array"<<endl;
	}
	else
	{
		cout<<"Hurray!! Key is found at index"<<ans<<" of the array"<<endl;
	}
  return 0;
}