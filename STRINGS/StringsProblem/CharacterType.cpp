#include<bits/stdc++.h>
using namespace std;

char CharacterType(char a)
{
    if(a>='A' && a<='Z')
    {
        return 'U';
    }
    else if(a>='a' && a<='z')
    {
        return 'L';
    }
    else{
        return 'I';
    }
}

int main()
{
    char ch;
    cin>>ch;
    char res = CharacterType(ch);
    cout<<res<<endl;
    return 0;
}