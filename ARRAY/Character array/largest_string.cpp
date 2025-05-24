#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   char ch[1000];
   cin.get();
   char largest_string[1000];
   size_t largestsize=0;
   for(int i =0;i<n;i++)
   {
      cin.getline(ch,1000);
      if(strlen(ch)>largestsize)
      {
        largestsize = strlen(ch);
        strcpy(largest_string,ch);
      }
   }
   cout<<largest_string<<" "<<"size is "<< largestsize<<endl;
   return 0;
}