/* string is alternative of an character array and it is a container */
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   //string init
   string s0;
   string s1("Hello");
   string s2= "Hello";
   string s3(s2);
   string s4 = s2;
   char a[]={'a','b','c','\0'};
   string s5(a);
   cout<<s5<<endl;
   
   //empty string
   if(s0.empty())
   {
      cout<<"string is empty"<<endl;
   }

   //append string
   s0.append(s1);
   cout<<s0<<endl;
   s0 += ", I am Divakar Kumar.";
   string sx = "I am fan of whiteBeard";
   s0 +=sx;
   cout<<s0<<endl;

   //remove
   cout<<s0.length()<<endl;
   s0.clear();
   cout<<s0.length()<<endl;

   //compare two string (Lexicographical ordering)
   s0 = "Apple";
   s1 = "Mango";
   cout<< s0.compare(s1) <<endl;   // return an integer ==0 equal, > 0 , < 0

   //Overloaded Operator Operators
   if(s1>s0)
   {
     cout<<"Mango is lexi greater than Apple";
   }
   //acess any char in string at given index
   cout<<s1[0]<<endl;

   //find in a string
   string s = "One piece is my fav anime i ever watched";
   int idx = s.find("fav");
   cout<<idx<<endl;
 
   //remove a word from a string
   string word = "fav";
   int len = word.length();
   s.erase(idx,len+1);
   cout<<s<<endl;

   //Iterate over all characters in the string
   for(size_t i =0;i<s0.length();i++)
   {
      cout<<s0[i]<<":";
   }
   cout<<endl;

   //using iterator
   string:: iterator it;
   for(it= s0.begin();it!=s0.end();it++)
   //for(auto it = s0.begin();it!=s0.end();it++)
   {
    cout<<(*it)<<",";
   }
   cout<<endl;

   //for each loop
   for(auto ch:s0)
   {
       cout<<ch<<";";
   }
   cout<<endl;
   

   return 0;
}