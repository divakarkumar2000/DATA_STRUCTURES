/* as name the name suggest insert the element at the sorted position
at every interation left half of array is to be sorted
The simple steps of achieving the insertion sort are listed as follows -

Step 1 - If the element is the first element, assume that it is already sorted. Return 1.

Step2 - Pick the next element, and store it separately in a key.

Step3 - Now, compare the key with all elements in the sorted array.

Step 4 - If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.

Step 5 - Insert the value.

Step 6 - Repeat until the array is sorted.
*/
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int array[],int size)
{
    for(int i=1;i<size;i++)
    {
        int e =array[i];
        // place the current element at the right position in the sorted array
        int j=i-1;
        while(j>=0&& e<array[j])
        {
           array[j+1]=array[j];
           j--;
        }
        array[j+1]=e;
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
    cout<< "Elements are : ";
	for(int i=0;i<size;i++)
	{
		cout<< a[i] <<" ";
	}
	
	insertion_sort(a,size);
    cout<<" \n After Sorting :"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i] <<" ";
	}
    return 0;
}