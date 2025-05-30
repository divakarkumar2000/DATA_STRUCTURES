#include<bits/stdc++.h>
using namespace std;
/*
void upperLower(char a)
{
    if(int(a)>=65 && int(a)<=90)
    {
        cout<<"UPPERCASE"<<endl;
    }
    else if(int(a)>=97 && int(a)<=122)
    {
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}
*/

void upperLower(char a)
{
    if(a>='A' && a<='Z')
    {
        cout<<"UPPERCASE"<<endl;
    }
    else if(a>='a' && a<='z')
    {
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}

int main()
{
    char a;
    cin>>a;
    upperLower(a);
    return 0;
}