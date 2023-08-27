
/* In bubble sort , we just have to take heaviest element to the bottom and lighter bubble up */

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int array[],int size)
{
	
	for(int i=0;i<size-1;i++)
	{
		int flag=0;
		for(int j=0;j<size-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				flag=1;
              swap(array[j],array[j+1]);
			}
			
		}
		if(flag==0)
		{
			break;
		}
	}
}
int main()
{
	int size;
	cout<<"Enter size: ";
	cin>>size;

	int a[size];
    cout<<"Enter elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<< a[i] <<" ";
	}
	
	bubble_sort(a,size);
    cout<<" \n After Sorting :"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i] <<" ";
	}
    return 0;
}