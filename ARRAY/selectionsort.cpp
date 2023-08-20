/*Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place 
comparison-based algorithm in which the list is divided into two parts, the sorted part at 
the left end and the unsorted part at the right end. Initially, the sorted part is empty and
 the unsorted part is the entire list.

The smallest element is selected from the unsorted array and swapped with the leftmost element,
 and that element becomes a part of the sorted array. This process continues moving unsorted array
  boundary by one element to the right.

This algorithm is not suitable for large data sets as its average and worst case complexities are
 of Ο(n2), where n is the number of items.*/
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    int i=0,j=0;
    for(i=0;i<n-1;i++)
	{
		int min=arr[i];
		int k=i;
       for(j=i;j<n;j++)
	   {
		  if(arr[j]<min)
		  {
			k=j;
		  }
	   }
	   swap(arr[i],arr[k]);
	}
}
int main()
{
	int size;
	cout<<"Enter size: ";
	cin>>size;

	int a[size];

	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i<<" Number :";
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<< a[i];
	}
	
	selection_sort(a,size);
    cout<<" \n After Sorting :"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
    return 0;
}