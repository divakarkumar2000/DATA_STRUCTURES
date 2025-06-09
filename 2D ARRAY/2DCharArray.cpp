#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    char a[][10]={{'a','b','c','d','a','b','c','d','e','\0'},{'d','e','f','\0'},{'g','h','i','\0'}};
    cout<<a[0]<<" Size of"<< sizeof(a[0])<<endl;
    cout<<a[0][1]<<endl;
    char b[][5]={"abc","def","ghi"};
    cout<<b[0]<<" Size of"<< sizeof(b[0])<<endl;

    */

    //Read a list of strings and we will store them in a 2D char array
    char arr[100][100];
    int n;
    cin>>n;
    cin.get();
    for(int i =0;i<n;i++)
    {
        cin.getline(arr[i],100);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}