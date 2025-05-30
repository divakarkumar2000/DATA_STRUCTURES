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

void canYouReadThis(string s)
{
    size_t i=1;
    string res = "";
    res+=s[0];
    while(i<s.length())
    {
        if(CharacterType(s[i])=='U')
        {
            cout<<res<<endl;
            res="";
        }
        res+=s[i];
        i++;
    }
    cout<<res<<endl;
}
int main()
{
    string s;
    cin>>s;
    canYouReadThis(s);
    return 0;
}