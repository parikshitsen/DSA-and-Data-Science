/*
Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).


Example 1:

Input:
string1 = "computer"
string2 = "cat"
Output: "ompuer"
Explanation: After removing characters(c, a, t)
from string1 we get "ompuer".

Input:
string1 = "occurrence"
string2 = "car"
Output: "ouene"
Explanation: After removing characters
(c, a, r) from string1 we get "ouene".
*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeChars(string string1, string string2)
    {
      for(int i=0;i<string1.size();i++)
      {
        for(int j=0;j<string2.size();j++)
        {
          if(string1[i]==string2[j])
          {
            string1.erase(string1.begin()+i);
            i--;
          }
        }
      }
      return string1;
    }
};
int main()
{
  int t;
  cin >>t;
  while(t--)
  {
    string string1 , string2;
    cin>>string1;
    cin>>string2;
    Solution ob;
    cout<< ob.removeChars(string1,string2)<<endl;
  }
  return 0;
}
