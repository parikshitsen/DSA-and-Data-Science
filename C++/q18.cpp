/*Given a string passed in a function return the reversed string
https://practice.geeksforgeeks.org/problems/reverse-a-string/1
*/
#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str)
{
  string temp;
  for(int i = str.size()-1;i>=0;i--)
    temp.push_back(str[i]);
  return temp;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;

    cout<<reverseWord(s)<<endl;
  }
  return 0;
}
