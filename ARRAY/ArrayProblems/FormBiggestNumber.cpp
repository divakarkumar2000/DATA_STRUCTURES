/*
Problem Name: Form Biggest Number
Problem Difficulty: None
Problem Constraints: 1<=t<=100 <br>
1<=m<=100 <br>
1<=A[i]<=10^5
Problem Description:
You are provided an array of numbers. You need to  arrange them in a way that yields the largest value.


Input Format: First line contains integer t which is number of test case. <br>
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .

Sample Input: 1
4
54 546 548 60
Output Format: Print the largest value.

Sample Output: 6054854654
*/
#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b)
{
    return a+b>b+a;
}

string biggestNumber(int a[],int n)
{
    vector<string>temp;
    for(int i=0;i<n;i++)
    {
        temp.push_back(to_string(a[i]));
    }
    if(stoi(temp[0])==0)
    {
        return "0";
    }
    string res="";
    sort(temp.begin(),temp.end(),comp);
    for(auto x:temp)
    {
        res+=x;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string ans = biggestNumber(a,n);
    cout<<ans<<endl;
    return 0;
}

