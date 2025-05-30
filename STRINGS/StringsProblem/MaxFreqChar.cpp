#include<bits/stdc++.h>
using namespace std;
char maxFreqChar(string s)
{
    unordered_map<char,int> umap;
    for(size_t i =0;i<s.length();i++)
    {
        umap[s[i]]++;
    }
    char ch;
    int max = INT_MIN;
    for(auto x:umap)
    {
        if(x.second>max)
        {
            ch = x.first;
            max = x.second;
        }
    }
    return ch;
}
int main()
{
   string s;
   cin>>s;
   char ch = maxFreqChar(s);
   cout<<ch<<endl;
}