
/* In bubble sort , we just have to take heaviest element to the bottom and lighter bubble up */
/*The simple steps of achieving the insertion sort are listed as follows -

Step 1 - If the element is the first element, assume that it is already sorted. Return 1.

Step2 - Pick the next element, and store it separately in a key.

Step3 - Now, compare the key with all elements in the sorted array.

Step 4 - If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.

Step 5 - Inserst the value.

Step 6 - Repeat until the array is sorted.

Adaptive -> T.C. O(N^2) 
            Best O(N)
Stable
*/

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