#include<bits/stdc++.h>
using namespace std;
bool comparator(int a , int b)
{
    return a<b;
}
// Accept a function inside a function
/*
 returntype &functionname(arguments)
*/
void bubble_sort(int array[],int size,bool (&comparator)(int a,int b))
{
	
	for(int i=0;i<size-1;i++)
	{
		int flag=0;
		for(int j=0;j<size-1-i;j++)
		{
			if(comparator(array[j],array[j+1]))
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
	
	bubble_sort(a,size,comparator);
    cout<<" \n After Sorting :"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i] <<" ";
	}
    return 0;
}