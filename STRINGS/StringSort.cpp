#include<bits/stdc++.h>
using namespace std;
int comparator(string a,string b)
{
    if(a.length()==b.length())
    {
        return a<b;  //lexo sort
    }
    return a.length()>b.length();
}
int main()
{
    string s[100];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    sort(s,s+n,comparator);
    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}