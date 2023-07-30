// Normal traversal of an array linear from left side
// t.c.= O(n)
// most basic search
#include<iostream>
using namespace std;
int main()
{
	int size,key;
	cout<<"Enter size: ";
	cin>>size;


	int a[size];

	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a key :";
	cin>>key;
	int i=0;
	for(;i<size;i++)
	{
		if(a[i]==key)
		{
			cout<<"Key is found at index :"<<i<<endl;
			break;
		}
	}
	if(i==size){
    cout<<"key is not found "<<endl;
    }
	return 0;
}