/*
Input Format

You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input:
  abcd
  ef
Sample Output:
  4 2
  abcdef
  ebcd af

Explanation:
a =  "abcd"
b =  "ef"
|a| = 4
|b| = 2
a+b = "abcdef"
a' = "ebcd"
b' =  "af"
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a , b;
  cin>>a;
  cin>>b;
  cin.ignore(); // clears out the cin buffer
  cout<<a.size() << " "<< b.size()<<endl;
  cout<<a+b<<endl;
  char temp;
  temp = a[0];
  a[0]=b[0];
  b[0]=temp;
  cout<<a<<" "<<b;
  return 0;
}
