// An array is a collection of items of same data type stored at contiguous memory locations.
// Data type name[size];
// int a[5]; all elements in a have garbage value
// int a[5]={0} all elements in a zero
// int a[5]={2,4} remaining three elements is zero
#include<iostream>
using namespace std;
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
	a[0]=1;
	for(int i=0;i<size;i++)
	{
		cout<<i <<" Elements of array :"<< a[i]<<endl;
	}
	
	//size of array
	cout<<sizeof(a)<<endl;
	cout<<sizeof(a)/sizeof(int)<<endl;
	return 0;
}
// thank you 