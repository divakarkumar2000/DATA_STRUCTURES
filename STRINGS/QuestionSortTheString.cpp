#include<bits/stdc++.h>
using namespace std;

int convertIntoInt(string s)
{
    int ans = 0;
    int p = 1;
    for(int i = s.length()-1; i>=0; i--)
    {
        ans += ((s[i]-'0')*p);
        p = p*10;
    }
    return ans;
}

bool numericBased(pair<string,string>s1,pair<string,string>s2)
{
    int a = convertIntoInt(s1.second);
    int b = convertIntoInt(s2.second);
    return a<b;
}

bool lexioBased(pair<string,string>s1,pair<string,string>s2)
{
    return s1.second<s2.second;
}

string extractStringKey(string str, int key)
{
    char *s = strtok((char*)str.c_str()," ");
    while(key>1)
    {
        s = strtok(NULL," ");
        key--;
    }
    return (string)s;
}
int main()
{
      int n;
      cin>>n;
      cin.get(); 
      
      string s[100];
      for(int i=0;i<n;i++)
      {
        getline(cin,s[i]);
      }
       
      int key;
      string reversal, ordering;
      cin>>key>>reversal>>ordering;
      
      pair<string,string> a[100];
      for(int i =0 ; i<n; i++)
      {
         a[i].first=s[i];
         a[i].second=extractStringKey(s[i],key);
      }

      if(ordering =="numeric")
      {
        sort(a,a+n,numericBased);
      }
      else
      {
        sort(a,a+n,lexioBased);
      }

      if(reversal == "true")
      {
        for(int i=0;i<n/2;i++)
        {
            swap(a[i],a[n-i-1]);
        }
      }

      //print the output
      for(int i=0;i<n;i++)
      {
        cout<<a[i].first<<endl;
      }

      return 0;
}