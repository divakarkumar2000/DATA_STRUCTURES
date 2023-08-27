#include<bits/stdc++.h>
using namespace std;

// Comparator in sort
/*
bool compare(int a, int b)
{
    return a > b;
}

*/
bool compare(int a, int b)
{
    cout <<" comparing " <<a <<"and "<<b<<endl;
    if (a > b) {
        return true;
    } else {
        return false;
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
	//sort stl sort(array+start,array+(end+1 aka size))
	sort(a,a+size,compare);
    cout<<" \n After Sorting :"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<a[i] <<" ";
	}
    return 0;
}